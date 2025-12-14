#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3417719277224092337ULL;
unsigned long long int var_1 = 4840470667339084890ULL;
unsigned long long int var_3 = 8877643862027067735ULL;
unsigned long long int var_5 = 18277407836304162286ULL;
unsigned short var_6 = (unsigned short)26967;
unsigned char var_8 = (unsigned char)115;
short var_10 = (short)19794;
long long int var_11 = 7123787847714596548LL;
int zero = 0;
unsigned short var_12 = (unsigned short)13711;
unsigned char var_13 = (unsigned char)187;
unsigned char var_14 = (unsigned char)34;
unsigned long long int var_15 = 4059841417189585332ULL;
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
