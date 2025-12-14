#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43237;
unsigned char var_3 = (unsigned char)48;
short var_4 = (short)-1392;
unsigned int var_8 = 3902044401U;
unsigned char var_11 = (unsigned char)243;
int zero = 0;
unsigned char var_16 = (unsigned char)228;
unsigned int var_17 = 165204447U;
signed char var_18 = (signed char)8;
void init() {
}

void checksum() {
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
