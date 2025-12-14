#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_4 = 3883880247865784881LL;
unsigned int var_5 = 1310812218U;
_Bool var_6 = (_Bool)1;
int var_7 = -118464740;
short var_10 = (short)29405;
unsigned long long int var_11 = 14946960237712897784ULL;
unsigned char var_13 = (unsigned char)148;
short var_16 = (short)2581;
unsigned int var_17 = 3111328622U;
int zero = 0;
long long int var_18 = -5702226942521496851LL;
signed char var_19 = (signed char)-121;
signed char var_20 = (signed char)-125;
unsigned long long int var_21 = 6511638850899036539ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
