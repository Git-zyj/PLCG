#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_4 = -7174761173703291666LL;
unsigned int var_6 = 847916938U;
unsigned int var_10 = 2172005213U;
_Bool var_11 = (_Bool)1;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_17 = 13479825555487203223ULL;
int zero = 0;
unsigned int var_18 = 2307254051U;
long long int var_19 = -1974810328774187754LL;
unsigned int var_20 = 234545771U;
long long int var_21 = 9005463756487655778LL;
signed char var_22 = (signed char)-22;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
