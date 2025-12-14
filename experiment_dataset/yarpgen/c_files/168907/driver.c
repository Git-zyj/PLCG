#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)207;
unsigned short var_3 = (unsigned short)4732;
unsigned int var_4 = 675223938U;
unsigned int var_7 = 4230232348U;
unsigned short var_8 = (unsigned short)35100;
int var_10 = -1667099009;
unsigned long long int var_11 = 14129626184355729503ULL;
long long int var_12 = 1968826757315288066LL;
unsigned long long int var_13 = 8586927039773360145ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)99;
int var_15 = -1925494331;
short var_16 = (short)26887;
unsigned long long int var_17 = 6882943032200458196ULL;
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
