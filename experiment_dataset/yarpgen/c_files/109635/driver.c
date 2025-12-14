#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1568170060;
unsigned short var_1 = (unsigned short)59295;
unsigned int var_4 = 2359018237U;
signed char var_5 = (signed char)41;
unsigned short var_7 = (unsigned short)27278;
unsigned long long int var_8 = 16452242270156679335ULL;
short var_9 = (short)-8232;
short var_10 = (short)-5574;
unsigned short var_12 = (unsigned short)3196;
unsigned short var_13 = (unsigned short)42456;
short var_14 = (short)-13988;
int zero = 0;
unsigned int var_19 = 1364247654U;
short var_20 = (short)24666;
unsigned short var_21 = (unsigned short)54467;
signed char var_22 = (signed char)48;
void init() {
}

void checksum() {
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
