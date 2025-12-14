#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20043;
short var_3 = (short)1699;
short var_4 = (short)18623;
unsigned char var_5 = (unsigned char)205;
short var_6 = (short)-30404;
short var_8 = (short)-32258;
unsigned short var_11 = (unsigned short)45588;
unsigned char var_16 = (unsigned char)212;
short var_17 = (short)-19248;
unsigned short var_18 = (unsigned short)51344;
int zero = 0;
unsigned short var_19 = (unsigned short)1564;
unsigned short var_20 = (unsigned short)55629;
unsigned char var_21 = (unsigned char)191;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
