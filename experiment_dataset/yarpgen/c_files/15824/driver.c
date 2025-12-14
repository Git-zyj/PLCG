#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_4 = 1226162643281689116ULL;
long long int var_6 = 7332302889147122589LL;
int zero = 0;
unsigned long long int var_10 = 5474270605015100135ULL;
unsigned int var_11 = 3761830852U;
unsigned int var_12 = 303336162U;
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
