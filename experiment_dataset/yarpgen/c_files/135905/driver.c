#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23812;
unsigned int var_1 = 1577801801U;
short var_3 = (short)2161;
unsigned short var_4 = (unsigned short)46294;
_Bool var_5 = (_Bool)0;
short var_6 = (short)20458;
unsigned short var_11 = (unsigned short)33928;
unsigned short var_12 = (unsigned short)43667;
short var_14 = (short)29241;
short var_15 = (short)23601;
int zero = 0;
short var_16 = (short)28115;
short var_17 = (short)-21766;
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
