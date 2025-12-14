#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)201;
unsigned long long int var_2 = 6689583253709903591ULL;
unsigned long long int var_8 = 2358123425317757544ULL;
unsigned char var_13 = (unsigned char)236;
int zero = 0;
unsigned int var_14 = 1299207241U;
unsigned char var_15 = (unsigned char)171;
unsigned char var_16 = (unsigned char)8;
unsigned int var_17 = 3741800009U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
