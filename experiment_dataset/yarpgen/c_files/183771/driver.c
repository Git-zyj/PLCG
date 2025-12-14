#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16815741121688063929ULL;
signed char var_6 = (signed char)-100;
unsigned short var_8 = (unsigned short)27994;
unsigned long long int var_10 = 15275926011444112343ULL;
unsigned short var_11 = (unsigned short)34581;
int zero = 0;
signed char var_14 = (signed char)-70;
unsigned long long int var_15 = 4965251295032629527ULL;
void init() {
}

void checksum() {
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
