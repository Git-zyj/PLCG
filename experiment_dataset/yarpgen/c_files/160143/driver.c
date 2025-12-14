#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6361494562242542537LL;
short var_2 = (short)9567;
short var_4 = (short)-28323;
int var_6 = -320223431;
unsigned int var_7 = 2116677278U;
unsigned char var_14 = (unsigned char)95;
int zero = 0;
short var_15 = (short)-6070;
signed char var_16 = (signed char)49;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
