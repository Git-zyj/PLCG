#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)182;
signed char var_5 = (signed char)-40;
unsigned short var_6 = (unsigned short)6378;
unsigned int var_7 = 4059175723U;
unsigned char var_13 = (unsigned char)131;
short var_15 = (short)12289;
int zero = 0;
signed char var_16 = (signed char)-90;
unsigned int var_17 = 1449761878U;
unsigned int var_18 = 1176131510U;
unsigned char var_19 = (unsigned char)207;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
