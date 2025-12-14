#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)36462;
short var_7 = (short)-28405;
unsigned int var_8 = 916762480U;
unsigned short var_11 = (unsigned short)54645;
unsigned char var_12 = (unsigned char)213;
int zero = 0;
long long int var_16 = 1475234050400880186LL;
unsigned char var_17 = (unsigned char)74;
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
