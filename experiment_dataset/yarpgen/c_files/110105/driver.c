#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8784403365257674545ULL;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)48176;
unsigned short var_4 = (unsigned short)18538;
unsigned int var_6 = 2950940560U;
signed char var_7 = (signed char)123;
unsigned int var_8 = 1104465472U;
unsigned int var_9 = 3646732162U;
unsigned int var_10 = 3149032846U;
unsigned int var_11 = 71871645U;
unsigned int var_13 = 3315335502U;
long long int var_15 = 6275600094293379195LL;
int var_16 = -1481372634;
int zero = 0;
short var_17 = (short)24576;
short var_18 = (short)-104;
_Bool var_19 = (_Bool)0;
long long int var_20 = 2919572500675952640LL;
unsigned short var_21 = (unsigned short)27262;
unsigned char var_22 = (unsigned char)134;
int var_23 = -1123733297;
short var_24 = (short)1831;
unsigned int var_25 = 1730311197U;
signed char var_26 = (signed char)76;
int var_27 = -119918116;
short var_28 = (short)-14068;
unsigned int var_29 = 267114231U;
unsigned int var_30 = 2665519765U;
unsigned short var_31 = (unsigned short)23667;
_Bool var_32 = (_Bool)0;
unsigned short var_33 = (unsigned short)25486;
unsigned int var_34 = 42006365U;
long long int var_35 = 1350466000171554232LL;
unsigned short var_36 = (unsigned short)38521;
unsigned int var_37 = 2556482709U;
unsigned int var_38 = 3278033103U;
unsigned int var_39 = 934263342U;
int var_40 = 418740383;
unsigned int arr_0 [23] ;
signed char arr_1 [23] [23] ;
unsigned int arr_6 [14] [14] [14] ;
int arr_9 [14] [14] [14] ;
_Bool arr_14 [19] ;
int arr_16 [19] ;
int arr_19 [19] ;
unsigned int arr_21 [19] ;
_Bool arr_27 [19] [19] ;
unsigned long long int arr_33 [19] [19] ;
_Bool arr_2 [23] [23] ;
unsigned long long int arr_11 [14] ;
unsigned char arr_12 [14] ;
unsigned char arr_24 [19] ;
signed char arr_29 [19] [19] [19] [19] ;
long long int arr_34 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 4105749164U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)83;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 633586948U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -491844837 : 847199194;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = 302356789;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_19 [i_0] = -1329443578;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? 3811786606U : 1093222197U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_27 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_33 [i_0] [i_1] = 15129673965919893928ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = 2540131792598663895ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? (unsigned char)175 : (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)-120 : (signed char)-114;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 3599304679620443751LL : -2576518132068583663LL;
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
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_29 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_34 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
