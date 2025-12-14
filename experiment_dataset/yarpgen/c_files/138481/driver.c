#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4168866293504272320ULL;
unsigned long long int var_7 = 15400105755017750631ULL;
short var_13 = (short)-22655;
_Bool var_14 = (_Bool)1;
unsigned long long int var_16 = 18284376278169350180ULL;
unsigned char var_18 = (unsigned char)12;
int zero = 0;
unsigned int var_19 = 2083028763U;
long long int var_20 = -142677683637021383LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
