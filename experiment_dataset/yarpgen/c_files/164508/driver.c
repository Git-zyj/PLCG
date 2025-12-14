#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-6004;
int var_7 = 1502226503;
int var_8 = 1898141031;
unsigned char var_9 = (unsigned char)98;
int zero = 0;
unsigned long long int var_15 = 451676620196747543ULL;
int var_16 = 1647269871;
unsigned long long int var_17 = 7384679938079935175ULL;
unsigned char var_18 = (unsigned char)170;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
