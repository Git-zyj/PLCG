#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1092062256;
unsigned short var_4 = (unsigned short)21028;
int var_8 = 266402376;
int var_9 = 500407923;
signed char var_11 = (signed char)48;
int zero = 0;
unsigned int var_16 = 1722652928U;
unsigned char var_17 = (unsigned char)221;
short var_18 = (short)-11501;
unsigned short var_19 = (unsigned short)2085;
unsigned long long int var_20 = 3495075035092297440ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
