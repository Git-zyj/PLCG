#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
int var_6 = -125859171;
long long int var_8 = -687664771685151121LL;
signed char var_10 = (signed char)71;
int var_11 = 655246426;
int var_12 = 1039204652;
int zero = 0;
int var_16 = 1622264775;
short var_17 = (short)1686;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
