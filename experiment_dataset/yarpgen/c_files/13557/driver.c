#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1808942721U;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-9409;
long long int var_4 = -2412521764750442451LL;
signed char var_5 = (signed char)-7;
int zero = 0;
signed char var_10 = (signed char)110;
unsigned char var_11 = (unsigned char)110;
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
