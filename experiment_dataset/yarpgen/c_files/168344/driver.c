#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -297995941;
int var_5 = 1350834146;
unsigned short var_7 = (unsigned short)13561;
int var_13 = 116809675;
unsigned char var_14 = (unsigned char)137;
unsigned int var_16 = 4270728624U;
int zero = 0;
short var_17 = (short)-17661;
unsigned char var_18 = (unsigned char)32;
unsigned short var_19 = (unsigned short)30635;
unsigned char var_20 = (unsigned char)175;
void init() {
}

void checksum() {
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
