#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2308716911U;
int var_3 = 924966107;
unsigned char var_6 = (unsigned char)205;
unsigned char var_8 = (unsigned char)66;
unsigned char var_10 = (unsigned char)86;
unsigned char var_11 = (unsigned char)247;
int zero = 0;
unsigned int var_12 = 4103728305U;
int var_13 = -983503914;
unsigned char var_14 = (unsigned char)18;
unsigned char var_15 = (unsigned char)2;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
