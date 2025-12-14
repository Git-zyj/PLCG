#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)69;
signed char var_2 = (signed char)-16;
long long int var_7 = -5584239398071738032LL;
long long int var_8 = -1545853879590135223LL;
int var_9 = -320638065;
unsigned short var_10 = (unsigned short)61474;
long long int var_12 = -8181734643682085771LL;
int zero = 0;
unsigned long long int var_15 = 9564077534607732951ULL;
unsigned int var_16 = 3337093402U;
_Bool var_17 = (_Bool)1;
long long int var_18 = -2497353779481594988LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
