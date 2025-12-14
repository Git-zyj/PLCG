#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3519;
signed char var_6 = (signed char)56;
unsigned short var_11 = (unsigned short)49022;
int var_12 = -690848270;
signed char var_13 = (signed char)-21;
int zero = 0;
int var_14 = 550888240;
unsigned char var_15 = (unsigned char)242;
unsigned int var_16 = 1635258371U;
unsigned long long int var_17 = 22372344653880007ULL;
void init() {
}

void checksum() {
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
