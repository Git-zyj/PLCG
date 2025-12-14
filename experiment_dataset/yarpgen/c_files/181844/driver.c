#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -411961362;
unsigned short var_2 = (unsigned short)58425;
unsigned int var_5 = 4116032751U;
long long int var_6 = 2666216959422734761LL;
unsigned short var_7 = (unsigned short)61611;
int zero = 0;
unsigned char var_11 = (unsigned char)200;
unsigned short var_12 = (unsigned short)44857;
unsigned int var_13 = 2598282905U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
