#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1975527043U;
short var_3 = (short)-459;
unsigned long long int var_6 = 9809946794719120254ULL;
unsigned long long int var_9 = 5014836285600776136ULL;
long long int var_10 = 2006313286453646378LL;
unsigned long long int var_12 = 8960687082187286103ULL;
unsigned short var_13 = (unsigned short)41299;
unsigned long long int var_14 = 1578394697800026245ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 1656052086053313119ULL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
