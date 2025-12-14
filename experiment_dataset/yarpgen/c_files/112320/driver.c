#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 619808274136232005ULL;
unsigned char var_2 = (unsigned char)253;
unsigned char var_3 = (unsigned char)70;
unsigned int var_5 = 2995161898U;
short var_6 = (short)-4525;
unsigned long long int var_7 = 14710735255252213756ULL;
unsigned char var_9 = (unsigned char)184;
int zero = 0;
unsigned char var_10 = (unsigned char)93;
long long int var_11 = 8891489434146509190LL;
unsigned long long int var_12 = 10162561895913478489ULL;
unsigned long long int var_13 = 7911327617072101790ULL;
unsigned char var_14 = (unsigned char)109;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
