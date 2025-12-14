#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-15817;
short var_8 = (short)-7702;
short var_11 = (short)1461;
short var_14 = (short)-27119;
int zero = 0;
long long int var_19 = 3760294429986045382LL;
unsigned char var_20 = (unsigned char)183;
unsigned int var_21 = 1685705623U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
