#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12785;
unsigned short var_2 = (unsigned short)33310;
unsigned int var_3 = 1552690519U;
long long int var_8 = -4566782721416078575LL;
int var_9 = -1920263252;
int zero = 0;
unsigned char var_18 = (unsigned char)84;
unsigned long long int var_19 = 32030426068531231ULL;
void init() {
}

void checksum() {
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
