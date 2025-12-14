#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -626559622391281297LL;
unsigned char var_3 = (unsigned char)7;
unsigned short var_4 = (unsigned short)42053;
short var_7 = (short)-14165;
unsigned char var_8 = (unsigned char)29;
short var_11 = (short)-30786;
int zero = 0;
short var_13 = (short)30872;
short var_14 = (short)12109;
signed char var_15 = (signed char)-60;
short var_16 = (short)-14459;
unsigned short var_17 = (unsigned short)7256;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
