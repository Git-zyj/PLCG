#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48722;
signed char var_2 = (signed char)48;
unsigned char var_5 = (unsigned char)6;
unsigned char var_7 = (unsigned char)147;
int zero = 0;
unsigned short var_15 = (unsigned short)12719;
short var_16 = (short)17641;
int var_17 = 1852097035;
int var_18 = 276491857;
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
