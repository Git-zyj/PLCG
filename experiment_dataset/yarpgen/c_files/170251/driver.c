#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1139115116;
unsigned char var_7 = (unsigned char)185;
unsigned int var_9 = 2081148012U;
unsigned char var_14 = (unsigned char)55;
int zero = 0;
unsigned char var_15 = (unsigned char)93;
short var_16 = (short)5193;
void init() {
}

void checksum() {
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
