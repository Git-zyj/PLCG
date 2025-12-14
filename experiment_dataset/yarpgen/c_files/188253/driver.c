#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)10;
unsigned short var_5 = (unsigned short)24901;
unsigned char var_7 = (unsigned char)16;
unsigned char var_16 = (unsigned char)100;
int zero = 0;
short var_18 = (short)-28296;
long long int var_19 = 1474738683989532615LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
