#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-9485;
int var_5 = -1349749951;
unsigned int var_7 = 693656618U;
unsigned int var_10 = 784025449U;
unsigned char var_13 = (unsigned char)134;
signed char var_14 = (signed char)35;
unsigned long long int var_16 = 4365929651258643681ULL;
short var_17 = (short)-11730;
int zero = 0;
unsigned short var_19 = (unsigned short)37136;
unsigned short var_20 = (unsigned short)1061;
signed char var_21 = (signed char)99;
unsigned int var_22 = 941860653U;
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
