#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10974795055951781157ULL;
long long int var_1 = 8410350658786592222LL;
long long int var_2 = 2182105550340482938LL;
unsigned int var_3 = 1517226992U;
_Bool var_4 = (_Bool)0;
int var_5 = -1438189456;
unsigned char var_6 = (unsigned char)169;
int var_7 = -1304104305;
int zero = 0;
long long int var_10 = -2658284097649048094LL;
short var_11 = (short)7566;
unsigned long long int var_12 = 6671090021956484247ULL;
int var_13 = -664618625;
long long int var_14 = 2931998687050632203LL;
unsigned short var_15 = (unsigned short)54231;
short var_16 = (short)15830;
signed char var_17 = (signed char)-39;
int var_18 = 1771767559;
int var_19 = 1510716429;
signed char var_20 = (signed char)-83;
unsigned int var_21 = 4005744117U;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)1;
signed char var_24 = (signed char)-68;
long long int var_25 = 1811567849214296273LL;
long long int var_26 = -8326448751080354932LL;
long long int var_27 = -6765198611556466063LL;
short arr_0 [22] [22] ;
long long int arr_1 [22] ;
unsigned short arr_2 [22] ;
unsigned short arr_3 [22] [22] ;
signed char arr_5 [11] ;
unsigned char arr_8 [11] ;
unsigned int arr_9 [11] [11] ;
short arr_10 [11] [11] ;
unsigned char arr_13 [11] ;
int arr_17 [22] ;
unsigned int arr_20 [22] [22] [22] ;
int arr_4 [22] ;
unsigned char arr_7 [11] ;
long long int arr_11 [11] ;
long long int arr_15 [11] ;
signed char arr_16 [11] ;
signed char arr_19 [22] [22] ;
unsigned short arr_24 [22] [22] ;
short arr_25 [22] [22] ;
unsigned int arr_29 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-22857 : (short)-16792;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -4287211836977745224LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)45597;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)49520 : (unsigned short)7955;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (signed char)85;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (unsigned char)28;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = 2828765329U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = (short)20733;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = (unsigned char)239;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = 2090095610;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 1916740387U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 1894191850 : -1489203035;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (unsigned char)52;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = 1593815416642728961LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = 8809038344628023763LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_16 [i_0] = (signed char)-118;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_19 [i_0] [i_1] = (signed char)-48;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_24 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)165 : (unsigned short)56323;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_25 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)16840 : (short)301;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_29 [i_0] = 2309496154U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_29 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
