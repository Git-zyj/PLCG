#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 9403262583366610901ULL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 12151164642152910083ULL;
unsigned long long int var_10 = 15514103845172015086ULL;
short var_12 = (short)-12700;
int zero = 0;
long long int var_17 = -8613598228985517912LL;
unsigned long long int var_18 = 2230282704378482390ULL;
signed char var_19 = (signed char)-52;
signed char var_20 = (signed char)-93;
int var_21 = 957274162;
int var_22 = 862050180;
short var_23 = (short)-12168;
short var_24 = (short)-2363;
unsigned int var_25 = 3991706693U;
int var_26 = -1829578466;
int var_27 = -630939289;
_Bool arr_6 [25] [25] ;
unsigned long long int arr_7 [25] ;
unsigned int arr_11 [24] [24] ;
unsigned long long int arr_4 [19] ;
unsigned int arr_8 [25] ;
unsigned int arr_12 [24] [24] ;
unsigned long long int arr_16 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 8503469050448662730ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? 3711276005U : 2030126758U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 8765695484567418290ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 1367252380U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? 2248355335U : 1189656512U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = 1500511157216479884ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
