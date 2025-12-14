#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)28822;
short var_5 = (short)-11596;
unsigned short var_6 = (unsigned short)30407;
unsigned int var_7 = 3617174085U;
unsigned int var_10 = 2937949473U;
int zero = 0;
unsigned short var_12 = (unsigned short)54299;
unsigned short var_13 = (unsigned short)23066;
int var_14 = 1339885713;
unsigned short var_15 = (unsigned short)3070;
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
