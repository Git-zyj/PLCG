#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6408;
unsigned short var_4 = (unsigned short)53090;
short var_6 = (short)-15272;
int var_10 = -539064677;
unsigned short var_13 = (unsigned short)38027;
long long int var_14 = 3364114450929081207LL;
unsigned char var_18 = (unsigned char)232;
int zero = 0;
short var_19 = (short)30210;
unsigned long long int var_20 = 13586454393721702923ULL;
int var_21 = -1112423799;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
