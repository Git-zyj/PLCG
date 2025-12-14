#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-16;
unsigned short var_2 = (unsigned short)49029;
long long int var_4 = -6015004465677073557LL;
_Bool var_7 = (_Bool)0;
long long int var_9 = 265251954381268518LL;
long long int var_11 = -3684497155404149633LL;
short var_12 = (short)29334;
long long int var_13 = -5937032097377160930LL;
int zero = 0;
long long int var_14 = 2893584108007265797LL;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 5779137385533351961ULL;
void init() {
}

void checksum() {
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
