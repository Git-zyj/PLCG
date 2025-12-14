#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1017118838;
unsigned char var_2 = (unsigned char)7;
short var_3 = (short)-22916;
signed char var_8 = (signed char)75;
int zero = 0;
int var_16 = 1785808136;
unsigned char var_17 = (unsigned char)119;
unsigned char var_18 = (unsigned char)197;
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
