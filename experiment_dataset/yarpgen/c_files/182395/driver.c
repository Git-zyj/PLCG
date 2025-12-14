#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1798027198U;
long long int var_2 = -2982950678031345449LL;
unsigned long long int var_4 = 1404018589691037956ULL;
short var_6 = (short)-14824;
signed char var_7 = (signed char)48;
unsigned char var_8 = (unsigned char)213;
short var_10 = (short)20053;
int zero = 0;
short var_11 = (short)-19035;
signed char var_12 = (signed char)-67;
void init() {
}

void checksum() {
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
