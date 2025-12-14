#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3383271660U;
unsigned int var_5 = 164792953U;
unsigned short var_6 = (unsigned short)12081;
unsigned char var_10 = (unsigned char)106;
unsigned int var_15 = 3199902305U;
int zero = 0;
short var_20 = (short)24130;
int var_21 = -1765852273;
void init() {
}

void checksum() {
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
