#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 6926727200811188426ULL;
unsigned long long int var_10 = 1171410783600952518ULL;
short var_11 = (short)21322;
unsigned long long int var_12 = 15446727180266261460ULL;
unsigned char var_13 = (unsigned char)19;
int zero = 0;
unsigned char var_16 = (unsigned char)252;
unsigned short var_17 = (unsigned short)47772;
short var_18 = (short)-2455;
void init() {
}

void checksum() {
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
