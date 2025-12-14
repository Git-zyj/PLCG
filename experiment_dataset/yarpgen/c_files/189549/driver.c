#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)118;
unsigned short var_2 = (unsigned short)59028;
unsigned short var_3 = (unsigned short)59146;
unsigned char var_4 = (unsigned char)78;
_Bool var_5 = (_Bool)0;
long long int var_6 = 5030581992517031194LL;
unsigned char var_7 = (unsigned char)29;
unsigned short var_10 = (unsigned short)48477;
unsigned short var_11 = (unsigned short)32372;
signed char var_13 = (signed char)23;
unsigned short var_14 = (unsigned short)22927;
short var_15 = (short)-1096;
unsigned short var_17 = (unsigned short)2773;
int zero = 0;
unsigned short var_19 = (unsigned short)47421;
unsigned char var_20 = (unsigned char)237;
unsigned int var_21 = 3062342090U;
unsigned short var_22 = (unsigned short)15564;
short var_23 = (short)20426;
unsigned char var_24 = (unsigned char)224;
unsigned char var_25 = (unsigned char)205;
_Bool var_26 = (_Bool)1;
unsigned short var_27 = (unsigned short)53566;
_Bool arr_0 [15] [15] ;
unsigned short arr_1 [15] ;
unsigned char arr_5 [14] [14] ;
unsigned int arr_7 [14] ;
unsigned short arr_8 [14] [14] ;
unsigned short arr_10 [14] ;
_Bool arr_14 [14] ;
long long int arr_25 [19] ;
int arr_27 [19] ;
int arr_2 [15] [15] ;
signed char arr_3 [15] ;
unsigned short arr_6 [14] [14] ;
unsigned long long int arr_15 [14] ;
_Bool arr_16 [14] ;
long long int arr_17 [14] [14] ;
unsigned short arr_22 [14] ;
short arr_23 [14] ;
unsigned short arr_24 [14] ;
unsigned short arr_28 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)30048;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 2354331397U : 602010641U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)55969;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (unsigned short)13213;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_25 [i_0] = 1818522804597546252LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_27 [i_0] = 808283344;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = -1266290118;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)33850 : (unsigned short)60889;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 444709432673317585ULL : 10021729085063129337ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? 435377964206953450LL : 3380447205965350694LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (unsigned short)43335 : (unsigned short)28219;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (short)2193 : (short)2520;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? (unsigned short)19426 : (unsigned short)26681;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_28 [i_0] = (unsigned short)30740;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_28 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
