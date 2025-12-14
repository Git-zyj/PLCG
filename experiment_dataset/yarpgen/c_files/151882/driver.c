#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2937077945U;
unsigned long long int var_6 = 2269390591143387046ULL;
unsigned long long int var_7 = 6756904987541715756ULL;
unsigned short var_9 = (unsigned short)22990;
unsigned char var_10 = (unsigned char)233;
int zero = 0;
signed char var_11 = (signed char)66;
unsigned int var_12 = 2160771237U;
unsigned short var_13 = (unsigned short)12269;
unsigned char var_14 = (unsigned char)76;
void init() {
}

void checksum() {
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
