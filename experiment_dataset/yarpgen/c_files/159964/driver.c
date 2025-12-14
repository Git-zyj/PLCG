#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1206488804;
unsigned long long int var_5 = 6709681895975138811ULL;
unsigned long long int var_11 = 16025393405239315740ULL;
int var_13 = -695479587;
int zero = 0;
unsigned long long int var_15 = 5750678963037061730ULL;
unsigned short var_16 = (unsigned short)1977;
signed char var_17 = (signed char)33;
long long int var_18 = -871166408290367795LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
