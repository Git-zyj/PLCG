#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_7 = (signed char)-23;
unsigned int var_10 = 1190986502U;
int zero = 0;
unsigned long long int var_12 = 5901486603032986262ULL;
unsigned long long int var_13 = 11708835858170205864ULL;
long long int var_14 = -8620051481266088605LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
