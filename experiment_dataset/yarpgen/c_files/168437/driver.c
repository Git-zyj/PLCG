#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_5 = 6504988293366434136LL;
unsigned int var_6 = 1454759909U;
long long int var_7 = -6480043565583674098LL;
short var_8 = (short)-30367;
int zero = 0;
long long int var_10 = -1166669752793207237LL;
unsigned char var_11 = (unsigned char)198;
signed char var_12 = (signed char)29;
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
