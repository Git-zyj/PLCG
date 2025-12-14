#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2611196015021735616LL;
short var_3 = (short)16679;
int var_5 = -159964801;
int var_6 = -1702492020;
short var_7 = (short)-30716;
_Bool var_8 = (_Bool)0;
int zero = 0;
int var_10 = 1680184359;
unsigned int var_11 = 3398093467U;
unsigned char var_12 = (unsigned char)226;
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
