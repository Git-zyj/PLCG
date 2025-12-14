#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3483312463U;
int var_3 = -800045403;
short var_4 = (short)30120;
unsigned long long int var_6 = 14980517039312769761ULL;
short var_7 = (short)24764;
unsigned int var_8 = 977521432U;
unsigned int var_11 = 1928724604U;
unsigned long long int var_12 = 10663545165685298715ULL;
unsigned long long int var_13 = 6067849090831214946ULL;
short var_14 = (short)-20484;
short var_16 = (short)9922;
_Bool var_17 = (_Bool)0;
int zero = 0;
int var_18 = 511374856;
short var_19 = (short)-7616;
unsigned int var_20 = 1531023564U;
int var_21 = 1960440440;
unsigned int var_22 = 1329663298U;
unsigned long long int var_23 = 1317327442011421185ULL;
unsigned int arr_0 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 3228898863U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
