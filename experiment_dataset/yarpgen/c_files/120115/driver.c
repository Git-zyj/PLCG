#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-2774;
short var_4 = (short)1583;
unsigned char var_13 = (unsigned char)221;
int zero = 0;
unsigned int var_15 = 24252098U;
unsigned char var_16 = (unsigned char)62;
short var_17 = (short)-32205;
void init() {
}

void checksum() {
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
