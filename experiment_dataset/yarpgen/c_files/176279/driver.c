#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2139247522U;
unsigned short var_2 = (unsigned short)53189;
unsigned short var_8 = (unsigned short)42223;
int zero = 0;
unsigned char var_10 = (unsigned char)209;
unsigned int var_11 = 2898130005U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
