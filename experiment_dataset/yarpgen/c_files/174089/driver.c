#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1447383730;
signed char var_1 = (signed char)0;
long long int var_2 = -201666753849744650LL;
unsigned int var_4 = 1750190434U;
unsigned int var_6 = 2618561552U;
unsigned long long int var_7 = 17222238819110395687ULL;
int var_8 = -1272397909;
int var_10 = 59630294;
signed char var_12 = (signed char)28;
unsigned int var_13 = 1287517698U;
unsigned int var_14 = 1771553111U;
int zero = 0;
unsigned short var_16 = (unsigned short)47357;
unsigned int var_17 = 1416384958U;
unsigned int var_18 = 2736143007U;
unsigned int var_19 = 2139566224U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
