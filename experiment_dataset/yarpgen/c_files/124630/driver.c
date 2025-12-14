#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)16837;
int var_6 = 1870161935;
long long int var_7 = 7178881535361794742LL;
int var_8 = -2057720659;
signed char var_11 = (signed char)-14;
int zero = 0;
unsigned long long int var_12 = 13713442543750665743ULL;
unsigned long long int var_13 = 1526972951199688398ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
