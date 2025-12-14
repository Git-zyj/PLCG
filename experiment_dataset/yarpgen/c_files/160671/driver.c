#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5813914550899665018LL;
int var_4 = -1086186390;
unsigned char var_6 = (unsigned char)71;
_Bool var_12 = (_Bool)0;
long long int var_13 = -7241232472074194371LL;
unsigned char var_15 = (unsigned char)6;
int zero = 0;
unsigned long long int var_18 = 13586958841499346954ULL;
long long int var_19 = -2122875546211276487LL;
void init() {
}

void checksum() {
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
