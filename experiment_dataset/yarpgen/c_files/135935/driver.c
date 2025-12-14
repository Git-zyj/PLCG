#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)62;
unsigned char var_4 = (unsigned char)26;
unsigned long long int var_5 = 3379873564482321126ULL;
unsigned long long int var_8 = 9913984633346389690ULL;
unsigned char var_11 = (unsigned char)196;
unsigned long long int var_13 = 18197705505235296831ULL;
unsigned char var_14 = (unsigned char)64;
unsigned long long int var_15 = 5365675040960081311ULL;
unsigned long long int var_16 = 2819696248642957678ULL;
unsigned char var_17 = (unsigned char)196;
int zero = 0;
unsigned char var_18 = (unsigned char)158;
unsigned char var_19 = (unsigned char)63;
unsigned char var_20 = (unsigned char)133;
unsigned long long int var_21 = 6480443027255745263ULL;
unsigned char var_22 = (unsigned char)195;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
