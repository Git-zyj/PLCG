#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 930853483U;
unsigned char var_2 = (unsigned char)6;
short var_3 = (short)-8512;
unsigned int var_6 = 2154367813U;
short var_7 = (short)30114;
unsigned char var_8 = (unsigned char)120;
unsigned int var_12 = 559299360U;
int zero = 0;
signed char var_13 = (signed char)68;
unsigned char var_14 = (unsigned char)99;
unsigned short var_15 = (unsigned short)20568;
short var_16 = (short)26685;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
