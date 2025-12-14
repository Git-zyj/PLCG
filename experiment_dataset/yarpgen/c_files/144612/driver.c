#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_5 = 2544977265391374977LL;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 1767449252U;
unsigned int var_16 = 2375240716U;
int var_17 = 1950386194;
int zero = 0;
unsigned int var_18 = 2742489068U;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
