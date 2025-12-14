#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45811;
short var_1 = (short)5309;
long long int var_3 = -2149099228961934051LL;
short var_7 = (short)14833;
int zero = 0;
long long int var_14 = -5388116693055454858LL;
unsigned short var_15 = (unsigned short)48495;
unsigned short var_16 = (unsigned short)51207;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
