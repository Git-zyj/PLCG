#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_2 = 720843616;
int var_4 = -172267997;
unsigned int var_7 = 1396245224U;
int var_8 = -1599579018;
int var_11 = -1033041344;
int zero = 0;
unsigned long long int var_13 = 10534687990076547980ULL;
unsigned int var_14 = 1113703183U;
unsigned int var_15 = 448670454U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
