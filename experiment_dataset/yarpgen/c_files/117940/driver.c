#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)30198;
short var_4 = (short)6616;
unsigned char var_11 = (unsigned char)92;
signed char var_15 = (signed char)-22;
int zero = 0;
unsigned short var_19 = (unsigned short)56616;
unsigned short var_20 = (unsigned short)27823;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
