#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6533947221840067999ULL;
long long int var_7 = -6592974131913315565LL;
unsigned short var_9 = (unsigned short)21723;
long long int var_10 = -6907066382852277868LL;
unsigned char var_12 = (unsigned char)157;
long long int var_13 = 5522567699122979720LL;
int zero = 0;
long long int var_17 = -2947467275773306566LL;
unsigned short var_18 = (unsigned short)52804;
unsigned short var_19 = (unsigned short)15187;
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
