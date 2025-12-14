#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)56;
short var_4 = (short)7691;
long long int var_5 = -2526494252970643367LL;
short var_8 = (short)23220;
unsigned short var_9 = (unsigned short)1808;
unsigned int var_10 = 216581974U;
unsigned int var_11 = 18295416U;
unsigned long long int var_12 = 3833709970203778447ULL;
signed char var_14 = (signed char)-122;
int zero = 0;
unsigned short var_16 = (unsigned short)7403;
unsigned long long int var_17 = 10174007917267307733ULL;
int var_18 = -699889609;
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
