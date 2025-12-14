#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 922238002222415041ULL;
unsigned long long int var_12 = 5476917130409642266ULL;
unsigned short var_16 = (unsigned short)33964;
int zero = 0;
unsigned long long int var_19 = 16178649580526013932ULL;
unsigned char var_20 = (unsigned char)168;
unsigned int var_21 = 1948315387U;
int var_22 = 672520778;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
