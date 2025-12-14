#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11342;
unsigned short var_7 = (unsigned short)53494;
unsigned int var_10 = 166541497U;
int zero = 0;
unsigned long long int var_11 = 9446525616516416211ULL;
long long int var_12 = 3655869467576135316LL;
long long int var_13 = 4548639195901834884LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
