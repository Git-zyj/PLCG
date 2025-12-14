#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)55713;
unsigned int var_2 = 1600428697U;
long long int var_6 = 1252592259602484134LL;
int var_8 = 1816265855;
unsigned long long int var_10 = 15978773647307481343ULL;
int zero = 0;
unsigned int var_11 = 2628978348U;
unsigned char var_12 = (unsigned char)134;
unsigned char var_13 = (unsigned char)192;
long long int var_14 = -8511401311097888261LL;
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
