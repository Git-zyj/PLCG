#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)21;
unsigned char var_1 = (unsigned char)122;
unsigned int var_3 = 2587033556U;
unsigned char var_4 = (unsigned char)22;
short var_6 = (short)-20412;
unsigned short var_8 = (unsigned short)19973;
int zero = 0;
unsigned short var_13 = (unsigned short)16721;
unsigned char var_14 = (unsigned char)8;
unsigned int var_15 = 1261564980U;
unsigned char var_16 = (unsigned char)29;
unsigned char var_17 = (unsigned char)55;
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
