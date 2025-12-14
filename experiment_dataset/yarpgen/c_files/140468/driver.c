#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6034778506037412827LL;
unsigned short var_5 = (unsigned short)15836;
unsigned int var_6 = 3129886916U;
unsigned char var_10 = (unsigned char)85;
int zero = 0;
short var_11 = (short)-20471;
signed char var_12 = (signed char)31;
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
