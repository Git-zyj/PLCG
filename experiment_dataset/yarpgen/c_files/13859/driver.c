#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6986848340548729247ULL;
unsigned int var_1 = 412765719U;
unsigned int var_3 = 1765802302U;
short var_5 = (short)24261;
long long int var_6 = -6665719281115245183LL;
unsigned long long int var_8 = 2760610905621741595ULL;
unsigned short var_9 = (unsigned short)711;
unsigned int var_10 = 2427773032U;
int zero = 0;
int var_12 = -2067996868;
unsigned int var_13 = 3063008244U;
_Bool var_14 = (_Bool)0;
int var_15 = 869412530;
unsigned long long int var_16 = 14105607233565777846ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
