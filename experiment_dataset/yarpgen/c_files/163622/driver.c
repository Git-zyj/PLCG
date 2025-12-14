#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 721627929996303536ULL;
unsigned char var_2 = (unsigned char)32;
unsigned char var_3 = (unsigned char)56;
int zero = 0;
unsigned char var_15 = (unsigned char)127;
unsigned int var_16 = 2948382482U;
unsigned char var_17 = (unsigned char)210;
unsigned long long int var_18 = 4202173633957471523ULL;
unsigned long long int var_19 = 17187749457027417082ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
