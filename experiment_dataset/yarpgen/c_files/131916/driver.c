#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1714278836;
unsigned long long int var_3 = 12859471261823810287ULL;
_Bool var_5 = (_Bool)0;
short var_9 = (short)-26519;
signed char var_10 = (signed char)66;
unsigned char var_11 = (unsigned char)20;
int zero = 0;
unsigned long long int var_15 = 14186903482126914533ULL;
unsigned char var_16 = (unsigned char)253;
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
