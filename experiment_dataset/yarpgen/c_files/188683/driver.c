#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)232;
unsigned char var_3 = (unsigned char)17;
unsigned long long int var_6 = 16413226305790374888ULL;
int var_7 = 2035163332;
unsigned long long int var_10 = 1128184262077744454ULL;
int zero = 0;
unsigned int var_15 = 3002797670U;
int var_16 = 375399539;
void init() {
}

void checksum() {
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
