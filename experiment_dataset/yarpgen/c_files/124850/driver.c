#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-60;
signed char var_3 = (signed char)6;
signed char var_4 = (signed char)-69;
signed char var_6 = (signed char)64;
unsigned short var_10 = (unsigned short)8730;
unsigned short var_11 = (unsigned short)56339;
unsigned short var_12 = (unsigned short)2927;
unsigned char var_13 = (unsigned char)33;
unsigned char var_14 = (unsigned char)29;
int zero = 0;
unsigned char var_17 = (unsigned char)231;
signed char var_18 = (signed char)88;
unsigned int var_19 = 3000012917U;
unsigned char var_20 = (unsigned char)209;
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
