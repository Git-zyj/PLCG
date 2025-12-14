#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 12134323497628283393ULL;
signed char var_6 = (signed char)31;
int zero = 0;
unsigned int var_10 = 2134322688U;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 6930553980875161153ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
