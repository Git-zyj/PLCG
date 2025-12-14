#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2419525049516068133LL;
unsigned short var_1 = (unsigned short)37945;
short var_3 = (short)1035;
short var_5 = (short)-22437;
int var_6 = -379449499;
int zero = 0;
unsigned short var_10 = (unsigned short)17450;
unsigned long long int var_11 = 15676132791122777460ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
