#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20421;
int var_2 = 1597835000;
unsigned short var_7 = (unsigned short)29213;
int var_10 = 1877199014;
unsigned long long int var_14 = 7605161932742698440ULL;
int var_17 = 1769153827;
unsigned long long int var_18 = 4757162993649975089ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)238;
long long int var_20 = -1679848738797139655LL;
unsigned int var_21 = 3436021576U;
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
