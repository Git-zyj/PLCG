#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)2702;
unsigned char var_5 = (unsigned char)14;
unsigned char var_7 = (unsigned char)231;
int zero = 0;
short var_19 = (short)-30128;
short var_20 = (short)5390;
unsigned char var_21 = (unsigned char)191;
int var_22 = 1605273537;
unsigned char var_23 = (unsigned char)191;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
