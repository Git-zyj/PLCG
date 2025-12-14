#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3671447110U;
unsigned long long int var_9 = 17046981442149011291ULL;
int var_17 = -642534357;
int zero = 0;
long long int var_19 = -2779152394850288139LL;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)21447;
int var_22 = 1019141710;
long long int var_23 = 6723143846662200113LL;
unsigned int var_24 = 2039866225U;
unsigned short var_25 = (unsigned short)59428;
short var_26 = (short)-13510;
unsigned short var_27 = (unsigned short)20960;
unsigned char var_28 = (unsigned char)36;
_Bool var_29 = (_Bool)0;
_Bool var_30 = (_Bool)0;
unsigned int var_31 = 378619769U;
int var_32 = 509142774;
unsigned char var_33 = (unsigned char)165;
unsigned char var_34 = (unsigned char)105;
unsigned char var_35 = (unsigned char)114;
unsigned short var_36 = (unsigned short)18291;
long long int var_37 = 3586634362715222828LL;
long long int var_38 = 2139010322962946293LL;
unsigned int var_39 = 884550958U;
unsigned long long int var_40 = 1534411940514805923ULL;
unsigned char arr_3 [15] [15] ;
unsigned long long int arr_4 [15] [15] [15] ;
_Bool arr_6 [23] [23] ;
signed char arr_7 [23] ;
unsigned int arr_10 [23] [23] ;
unsigned short arr_14 [23] [23] [23] ;
unsigned short arr_15 [23] [23] ;
_Bool arr_16 [23] [23] [23] ;
unsigned long long int arr_20 [23] ;
int arr_23 [23] [23] [23] ;
_Bool arr_25 [23] [23] ;
int arr_26 [23] [23] [23] ;
unsigned char arr_34 [17] [17] ;
unsigned int arr_8 [23] ;
unsigned char arr_9 [23] ;
unsigned short arr_12 [23] [23] ;
_Bool arr_32 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)29;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 8342387617423964672ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (signed char)4;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = 943779533U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned short)53246;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)42408;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_20 [i_0] = 10528495717773208836ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -332453514 : 1500238373;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_25 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = -2105894712;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_34 [i_0] [i_1] = (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = 2262565106U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (unsigned char)10;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)46161;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_32 [i_0] = (_Bool)1;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_32 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
