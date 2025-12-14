#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 176184538;
signed char var_5 = (signed char)3;
signed char var_7 = (signed char)22;
short var_11 = (short)-11751;
unsigned int var_12 = 1150271284U;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = 4841616363258270358LL;
short var_15 = (short)-32505;
unsigned int var_16 = 141662992U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
