#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1553334981;
int var_1 = 717677929;
unsigned long long int var_3 = 678774294271302597ULL;
unsigned char var_5 = (unsigned char)205;
unsigned int var_6 = 818928867U;
int var_7 = 279772016;
unsigned int var_8 = 2840296092U;
int var_11 = 340254231;
unsigned int var_13 = 1780638791U;
int zero = 0;
unsigned char var_14 = (unsigned char)157;
unsigned int var_15 = 2459613978U;
unsigned long long int var_16 = 15002092922931646515ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
