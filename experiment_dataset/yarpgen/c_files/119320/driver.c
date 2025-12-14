#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3911161444U;
unsigned int var_3 = 697132304U;
_Bool var_6 = (_Bool)1;
short var_12 = (short)6205;
short var_14 = (short)-14923;
int var_15 = 744112440;
int zero = 0;
unsigned long long int var_16 = 13692484427080921640ULL;
unsigned long long int var_17 = 6359937827122649315ULL;
int var_18 = -1169152649;
unsigned int var_19 = 1886708743U;
unsigned long long int var_20 = 4820190283719845991ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
