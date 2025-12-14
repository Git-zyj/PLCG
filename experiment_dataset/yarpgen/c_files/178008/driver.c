#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1207534405U;
unsigned char var_14 = (unsigned char)218;
int zero = 0;
unsigned long long int var_17 = 13582979922668512236ULL;
int var_18 = 223052607;
unsigned long long int var_19 = 16422589867086004867ULL;
void init() {
}

void checksum() {
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
