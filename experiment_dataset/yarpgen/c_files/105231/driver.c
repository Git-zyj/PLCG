#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46239;
unsigned char var_4 = (unsigned char)173;
unsigned long long int var_6 = 16420326354716640467ULL;
short var_7 = (short)-8527;
unsigned short var_10 = (unsigned short)154;
long long int var_12 = -423983494952815997LL;
unsigned long long int var_14 = 4092964825472659683ULL;
unsigned int var_15 = 212975206U;
int zero = 0;
short var_17 = (short)9328;
unsigned int var_18 = 70691902U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
