#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)198;
short var_6 = (short)-25863;
long long int var_8 = 7264462663031061132LL;
unsigned short var_13 = (unsigned short)5998;
int zero = 0;
unsigned char var_16 = (unsigned char)113;
int var_17 = 318128863;
void init() {
}

void checksum() {
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
