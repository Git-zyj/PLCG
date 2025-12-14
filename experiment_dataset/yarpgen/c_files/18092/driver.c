#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)109;
unsigned long long int var_1 = 4298940180100455756ULL;
unsigned int var_2 = 811224635U;
unsigned char var_4 = (unsigned char)205;
int var_5 = -1873032380;
unsigned char var_13 = (unsigned char)14;
int zero = 0;
unsigned char var_16 = (unsigned char)12;
signed char var_17 = (signed char)80;
int var_18 = -1643335717;
short var_19 = (short)-25536;
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
