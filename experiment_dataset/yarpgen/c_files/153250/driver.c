#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_3 = 91549892U;
_Bool var_4 = (_Bool)1;
unsigned int var_6 = 1425473949U;
short var_7 = (short)-13878;
_Bool var_8 = (_Bool)1;
unsigned short var_10 = (unsigned short)49887;
unsigned long long int var_11 = 1914995349980114111ULL;
unsigned int var_12 = 1544474359U;
unsigned short var_14 = (unsigned short)2754;
unsigned long long int var_17 = 16143696820524018291ULL;
unsigned short var_18 = (unsigned short)20812;
int var_19 = -750476788;
int zero = 0;
signed char var_20 = (signed char)33;
unsigned short var_21 = (unsigned short)5663;
unsigned int var_22 = 2762026167U;
unsigned long long int var_23 = 2080085185904638399ULL;
unsigned long long int var_24 = 12273740805913476679ULL;
unsigned long long int var_25 = 8914164594696459471ULL;
int var_26 = -220936461;
unsigned short var_27 = (unsigned short)4372;
unsigned int var_28 = 3208668001U;
int var_29 = -2031010650;
unsigned int var_30 = 69690939U;
unsigned int var_31 = 2365647861U;
unsigned long long int var_32 = 3987477514385965842ULL;
_Bool var_33 = (_Bool)1;
int var_34 = 972429404;
unsigned char var_35 = (unsigned char)137;
int var_36 = 1077088879;
short var_37 = (short)-15137;
unsigned int var_38 = 1226805331U;
long long int arr_0 [24] ;
int arr_1 [24] ;
short arr_2 [24] ;
unsigned long long int arr_5 [15] ;
int arr_7 [15] ;
_Bool arr_8 [15] ;
unsigned int arr_9 [15] [15] [15] ;
short arr_10 [15] ;
_Bool arr_11 [15] [15] ;
short arr_14 [22] ;
unsigned char arr_19 [22] ;
_Bool arr_20 [22] [22] ;
_Bool arr_21 [22] [22] [22] ;
unsigned int arr_23 [22] [22] [22] [22] ;
unsigned char arr_24 [22] ;
unsigned int arr_25 [22] [22] ;
int arr_28 [22] [22] [22] ;
unsigned short arr_3 [24] ;
unsigned int arr_4 [24] ;
long long int arr_12 [15] [15] [15] ;
_Bool arr_13 [15] ;
short arr_16 [22] ;
int arr_17 [22] [22] ;
unsigned short arr_30 [22] [22] [22] ;
signed char arr_31 [22] [22] ;
long long int arr_35 [19] ;
short arr_36 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -6174651537307272505LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 1347486001;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)-5155;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 17352182515128786915ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 832332282;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 2885998839U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (short)-14075;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (short)27598 : (short)-27143;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (unsigned char)72 : (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_20 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = 3342348593U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? (unsigned char)202 : (unsigned char)147;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_25 [i_0] [i_1] = 1014258268U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 700843751 : 752924989;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned short)15188;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 1344629173U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 356808889613855382LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (short)18563 : (short)29644;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? 1500324905 : -1788320508;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)48314 : (unsigned short)59170;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_31 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)110 : (signed char)-9;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_35 [i_0] = -4216300377162558788LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_36 [i_0] = (short)-8069;
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
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_30 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_36 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
