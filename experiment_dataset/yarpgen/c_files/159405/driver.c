#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28827;
int var_1 = -1386336384;
unsigned char var_2 = (unsigned char)78;
unsigned int var_3 = 684556902U;
unsigned long long int var_4 = 16223096953112245680ULL;
unsigned short var_6 = (unsigned short)55172;
unsigned char var_8 = (unsigned char)34;
int zero = 0;
int var_12 = -1069487657;
unsigned short var_13 = (unsigned short)36372;
unsigned int var_14 = 178202404U;
unsigned char var_15 = (unsigned char)78;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
