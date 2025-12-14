#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2932862808745125127LL;
unsigned int var_6 = 3708825922U;
short var_7 = (short)-6604;
unsigned char var_8 = (unsigned char)148;
int zero = 0;
unsigned long long int var_10 = 7632522149856994206ULL;
signed char var_11 = (signed char)20;
unsigned short var_12 = (unsigned short)40755;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
