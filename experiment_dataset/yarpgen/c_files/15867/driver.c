#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2425517706U;
int var_4 = 951079692;
short var_6 = (short)30557;
short var_7 = (short)-16392;
short var_11 = (short)-122;
unsigned short var_14 = (unsigned short)43238;
short var_16 = (short)-30272;
int zero = 0;
unsigned char var_17 = (unsigned char)177;
short var_18 = (short)-19821;
short var_19 = (short)-3288;
void init() {
}

void checksum() {
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
