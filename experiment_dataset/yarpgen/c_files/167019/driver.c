#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)198;
unsigned char var_5 = (unsigned char)232;
unsigned char var_8 = (unsigned char)251;
unsigned long long int var_11 = 10071320795210251551ULL;
short var_13 = (short)-20899;
unsigned char var_17 = (unsigned char)40;
int zero = 0;
unsigned short var_20 = (unsigned short)54588;
short var_21 = (short)-18894;
unsigned short var_22 = (unsigned short)4450;
unsigned char var_23 = (unsigned char)75;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
