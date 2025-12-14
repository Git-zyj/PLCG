#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)86;
short var_8 = (short)-12859;
unsigned char var_10 = (unsigned char)158;
short var_11 = (short)-19046;
int zero = 0;
short var_14 = (short)28634;
unsigned int var_15 = 343809864U;
unsigned int var_16 = 3044201201U;
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
