#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1626094067;
unsigned long long int var_5 = 14028304201311295574ULL;
unsigned char var_10 = (unsigned char)91;
int zero = 0;
unsigned char var_12 = (unsigned char)140;
unsigned short var_13 = (unsigned short)29396;
unsigned long long int var_14 = 8170206618019361266ULL;
unsigned int var_15 = 3229120193U;
long long int var_16 = 1179280689919932830LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
