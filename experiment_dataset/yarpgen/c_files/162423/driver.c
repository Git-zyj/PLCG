#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11669;
signed char var_2 = (signed char)-15;
unsigned short var_3 = (unsigned short)26729;
unsigned int var_4 = 814684423U;
unsigned int var_5 = 3211486430U;
unsigned int var_6 = 521796862U;
unsigned short var_7 = (unsigned short)61595;
int var_8 = -818531298;
int var_9 = 2047155960;
int var_10 = -1946185485;
unsigned short var_11 = (unsigned short)56123;
unsigned short var_12 = (unsigned short)65267;
long long int var_13 = -8452793784241178302LL;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)23620;
signed char var_17 = (signed char)-2;
unsigned char var_18 = (unsigned char)15;
_Bool var_19 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)-18;
unsigned short var_21 = (unsigned short)33084;
unsigned char var_22 = (unsigned char)250;
unsigned short var_23 = (unsigned short)38893;
signed char var_24 = (signed char)-71;
_Bool var_25 = (_Bool)1;
unsigned char var_26 = (unsigned char)124;
unsigned short var_27 = (unsigned short)21363;
_Bool var_28 = (_Bool)1;
int var_29 = 1654726159;
short var_30 = (short)24721;
_Bool var_31 = (_Bool)1;
unsigned int var_32 = 2775230685U;
int arr_0 [25] [25] ;
long long int arr_1 [25] [25] ;
unsigned short arr_2 [25] [25] ;
short arr_6 [13] ;
short arr_9 [13] [13] ;
short arr_11 [13] [13] [13] ;
signed char arr_14 [13] [13] [13] ;
unsigned short arr_15 [13] [13] ;
unsigned short arr_20 [19] ;
unsigned char arr_3 [25] ;
unsigned int arr_4 [25] [25] ;
unsigned short arr_5 [25] ;
signed char arr_12 [13] [13] ;
unsigned char arr_17 [13] ;
unsigned short arr_18 [13] [13] ;
unsigned int arr_19 [13] [13] [13] ;
short arr_28 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 359056452;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 8264177443387039369LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)3750;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (short)-4821;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-3067;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (short)14950;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (signed char)-89;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)5473;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_20 [i_0] = (unsigned short)56417;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = 2560916191U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned short)62943;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)113 : (signed char)-64;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned short)40525;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 1771398636U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? (short)-26844 : (short)-10047;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
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
