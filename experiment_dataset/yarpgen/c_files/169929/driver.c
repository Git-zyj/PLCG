#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-5534;
unsigned char var_8 = (unsigned char)96;
int zero = 0;
short var_12 = (short)-29476;
unsigned long long int var_13 = 3076421614038626274ULL;
unsigned short var_14 = (unsigned short)35149;
unsigned char var_15 = (unsigned char)198;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
