#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16654;
unsigned long long int var_2 = 11125628805823515446ULL;
unsigned char var_3 = (unsigned char)8;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 6585610366597400494ULL;
unsigned int var_13 = 2873760300U;
long long int var_14 = 281400633608015210LL;
short var_17 = (short)-2694;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = 1555429910;
void init() {
}

void checksum() {
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
