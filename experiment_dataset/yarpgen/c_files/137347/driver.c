#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 8468451669489078776ULL;
unsigned int var_5 = 341133534U;
unsigned long long int var_16 = 12034441213925185874ULL;
int zero = 0;
int var_17 = -1371693302;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 3083231105U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
