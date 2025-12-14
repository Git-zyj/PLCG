#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -893086588;
unsigned short var_13 = (unsigned short)535;
unsigned int var_14 = 2652134905U;
short var_15 = (short)-24376;
unsigned long long int var_16 = 10621957277929432284ULL;
int zero = 0;
unsigned long long int var_20 = 12689613037672488612ULL;
long long int var_21 = 1366582919968670937LL;
unsigned int var_22 = 3359421528U;
short var_23 = (short)-22919;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
