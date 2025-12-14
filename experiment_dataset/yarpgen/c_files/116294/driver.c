#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 670898189;
short var_1 = (short)998;
short var_5 = (short)-24271;
unsigned char var_6 = (unsigned char)67;
unsigned short var_9 = (unsigned short)18813;
int zero = 0;
unsigned short var_14 = (unsigned short)59109;
unsigned int var_15 = 1224158121U;
unsigned int var_16 = 1898238045U;
int var_17 = -1381591371;
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
