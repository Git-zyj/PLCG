#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)178;
unsigned long long int var_2 = 11834340909783088271ULL;
int var_7 = 777204676;
unsigned int var_10 = 523206432U;
short var_13 = (short)-10981;
unsigned long long int var_14 = 6378599500798666320ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)15750;
unsigned int var_16 = 1331715757U;
long long int var_17 = 836810253348086632LL;
void init() {
}

void checksum() {
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
