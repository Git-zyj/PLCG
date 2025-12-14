#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)30684;
unsigned int var_6 = 2565363234U;
unsigned int var_7 = 3791210951U;
signed char var_8 = (signed char)-46;
signed char var_10 = (signed char)33;
unsigned char var_13 = (unsigned char)87;
int zero = 0;
short var_14 = (short)-1681;
signed char var_15 = (signed char)-115;
unsigned char var_16 = (unsigned char)128;
void init() {
}

void checksum() {
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
