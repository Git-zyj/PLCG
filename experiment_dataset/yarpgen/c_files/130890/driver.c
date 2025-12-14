#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_3 = 433645052U;
int var_4 = -908536886;
unsigned short var_5 = (unsigned short)39084;
int var_6 = 1926645034;
short var_7 = (short)20515;
long long int var_10 = -5579571078958560686LL;
unsigned short var_11 = (unsigned short)44971;
unsigned int var_12 = 2706638317U;
long long int var_13 = 7187805350019528572LL;
short var_14 = (short)5357;
unsigned char var_15 = (unsigned char)160;
int zero = 0;
int var_16 = 721899700;
unsigned long long int var_17 = 10862789351376623201ULL;
int var_18 = 1653384573;
unsigned int var_19 = 844481651U;
long long int var_20 = 2597898237590452270LL;
signed char var_21 = (signed char)-70;
unsigned short var_22 = (unsigned short)56173;
unsigned long long int var_23 = 11244248680452130038ULL;
int arr_0 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 763457362;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
