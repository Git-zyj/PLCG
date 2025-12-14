#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)611;
short var_4 = (short)-3007;
signed char var_6 = (signed char)67;
int var_11 = -1702941098;
int zero = 0;
signed char var_14 = (signed char)31;
unsigned char var_15 = (unsigned char)248;
int var_16 = -719660189;
int var_17 = 488169257;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
