#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6212368556500969507LL;
unsigned int var_5 = 2321311095U;
long long int var_6 = -5511446683200721879LL;
long long int var_12 = 8261967819575944451LL;
signed char var_13 = (signed char)66;
long long int var_14 = 7851028950461226443LL;
int zero = 0;
short var_15 = (short)8942;
short var_16 = (short)-17445;
signed char var_17 = (signed char)45;
_Bool var_18 = (_Bool)0;
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
