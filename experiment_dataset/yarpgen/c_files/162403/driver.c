#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 9161209082816852906ULL;
unsigned char var_8 = (unsigned char)1;
unsigned long long int var_11 = 6793331333658162243ULL;
unsigned long long int var_12 = 5948452432861916846ULL;
int zero = 0;
short var_14 = (short)29518;
unsigned char var_15 = (unsigned char)252;
signed char var_16 = (signed char)39;
unsigned long long int var_17 = 5600524918319032096ULL;
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
