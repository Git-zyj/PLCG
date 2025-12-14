#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1309856205384034392LL;
signed char var_2 = (signed char)-42;
long long int var_5 = -5461580021696095926LL;
signed char var_6 = (signed char)2;
long long int var_7 = -2961913375486747323LL;
long long int var_9 = -5713470436355543654LL;
long long int var_10 = 40378136453426855LL;
long long int var_11 = -5396834904011805641LL;
long long int var_12 = 4210726433898426182LL;
signed char var_13 = (signed char)-51;
signed char var_14 = (signed char)13;
signed char var_15 = (signed char)-79;
int zero = 0;
long long int var_16 = 8064876410887502223LL;
signed char var_17 = (signed char)17;
long long int var_18 = -896418549124633526LL;
signed char var_19 = (signed char)44;
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
