#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)69;
long long int var_1 = -4740493199676906239LL;
long long int var_2 = -7695764433221979254LL;
int var_3 = -279476349;
short var_5 = (short)-839;
signed char var_6 = (signed char)-39;
int var_7 = 1419146737;
long long int var_8 = -8277946083153758558LL;
int var_9 = -765951009;
long long int var_10 = 5293269447145044122LL;
short var_11 = (short)10851;
int var_12 = -611414161;
unsigned char var_13 = (unsigned char)75;
unsigned int var_14 = 1970712585U;
short var_15 = (short)-26139;
signed char var_16 = (signed char)-27;
unsigned short var_17 = (unsigned short)24829;
int zero = 0;
unsigned int var_18 = 2064673989U;
short var_19 = (short)-19412;
signed char var_20 = (signed char)9;
int var_21 = 219239443;
long long int var_22 = -666626543122763975LL;
long long int var_23 = 1656045272904105013LL;
unsigned short var_24 = (unsigned short)23070;
short var_25 = (short)-10751;
unsigned short var_26 = (unsigned short)64908;
unsigned short var_27 = (unsigned short)12227;
unsigned long long int var_28 = 5717084648603028455ULL;
unsigned int var_29 = 1516787595U;
unsigned char var_30 = (unsigned char)165;
unsigned long long int var_31 = 11349488665504549259ULL;
long long int var_32 = -8558343123865851981LL;
long long int var_33 = 8264509286553989708LL;
int var_34 = 1511491583;
unsigned short var_35 = (unsigned short)56075;
int var_36 = -5677020;
_Bool var_37 = (_Bool)0;
unsigned short var_38 = (unsigned short)5872;
unsigned int var_39 = 2799951970U;
_Bool arr_4 [17] [17] ;
unsigned char arr_5 [17] [17] ;
int arr_16 [18] [18] ;
signed char arr_25 [18] [18] [18] ;
unsigned long long int arr_26 [18] [18] [18] [18] ;
unsigned char arr_32 [18] [18] [18] [18] ;
unsigned int arr_33 [18] [18] ;
long long int arr_39 [15] ;
int arr_42 [15] ;
signed char arr_43 [15] ;
int arr_46 [23] ;
unsigned short arr_47 [23] ;
unsigned short arr_50 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)106;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_16 [i_0] [i_1] = -1034401191;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = 17744590620862915491ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = (unsigned char)241;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_33 [i_0] [i_1] = 2633902453U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_39 [i_0] = 3074342725941665023LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_42 [i_0] = (i_0 % 2 == 0) ? -1849071579 : -1611950954;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_43 [i_0] = (signed char)68;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_46 [i_0] = 155912237;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_47 [i_0] = (unsigned short)29518;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_50 [i_0] = (unsigned short)18311;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_32 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_42 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_43 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_46 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_47 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_50 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
