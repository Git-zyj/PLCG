#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)160;
unsigned long long int var_4 = 2770548348776774823ULL;
long long int var_5 = -2930705677178970504LL;
unsigned long long int var_6 = 11621878210453409495ULL;
unsigned char var_7 = (unsigned char)212;
int zero = 0;
unsigned long long int var_11 = 2659831095124263132ULL;
unsigned int var_12 = 3484395407U;
int var_13 = -896221317;
short var_14 = (short)-5303;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
