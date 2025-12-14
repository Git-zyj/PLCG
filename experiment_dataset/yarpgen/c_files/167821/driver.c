#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)30393;
short var_2 = (short)-22220;
unsigned char var_5 = (unsigned char)25;
unsigned short var_11 = (unsigned short)2516;
int zero = 0;
unsigned short var_16 = (unsigned short)28153;
unsigned int var_17 = 59842288U;
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
