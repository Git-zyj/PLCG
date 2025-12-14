#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_4 = 458498930;
int var_5 = -2099907020;
int var_6 = 1710009545;
int var_8 = -1619261782;
int zero = 0;
unsigned char var_11 = (unsigned char)81;
unsigned char var_12 = (unsigned char)182;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
