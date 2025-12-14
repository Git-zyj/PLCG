#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2968786769551978903LL;
unsigned short var_3 = (unsigned short)34141;
long long int var_5 = 1347279701850410914LL;
unsigned short var_6 = (unsigned short)43497;
unsigned int var_7 = 1860014267U;
long long int var_10 = 7161419397371610289LL;
unsigned int var_11 = 1543624508U;
int zero = 0;
unsigned int var_12 = 277256343U;
unsigned int var_13 = 3782302355U;
unsigned short var_14 = (unsigned short)30573;
long long int var_15 = -396508000891399137LL;
unsigned short var_16 = (unsigned short)7527;
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
