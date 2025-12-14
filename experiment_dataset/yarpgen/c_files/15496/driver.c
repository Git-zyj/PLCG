#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)38674;
unsigned short var_2 = (unsigned short)31492;
unsigned short var_4 = (unsigned short)40190;
signed char var_5 = (signed char)109;
signed char var_6 = (signed char)30;
long long int var_7 = -5078142966691953879LL;
signed char var_8 = (signed char)91;
long long int var_11 = -6455983582009356052LL;
long long int var_12 = 5554223050321590108LL;
int zero = 0;
unsigned char var_13 = (unsigned char)174;
signed char var_14 = (signed char)-20;
unsigned short var_15 = (unsigned short)40845;
long long int var_16 = -8615288886331587291LL;
signed char var_17 = (signed char)-32;
long long int var_18 = 337817250142701785LL;
long long int var_19 = -1544096994638651924LL;
unsigned short var_20 = (unsigned short)11773;
signed char var_21 = (signed char)8;
unsigned char var_22 = (unsigned char)175;
long long int var_23 = -7414774447561443382LL;
signed char var_24 = (signed char)53;
unsigned short var_25 = (unsigned short)48146;
signed char var_26 = (signed char)39;
unsigned short var_27 = (unsigned short)24111;
unsigned char var_28 = (unsigned char)54;
long long int var_29 = -3588234530335566287LL;
long long int var_30 = 8267319375227847015LL;
signed char var_31 = (signed char)118;
unsigned char var_32 = (unsigned char)116;
unsigned short arr_0 [13] [13] ;
long long int arr_1 [13] ;
unsigned char arr_3 [13] [13] [13] ;
signed char arr_4 [13] ;
unsigned short arr_5 [13] [13] ;
long long int arr_8 [13] [13] [13] [13] ;
unsigned char arr_10 [13] [13] [13] [13] ;
signed char arr_14 [20] ;
unsigned char arr_15 [20] ;
signed char arr_18 [20] ;
unsigned short arr_19 [20] [20] ;
unsigned char arr_21 [14] [14] ;
unsigned char arr_2 [13] ;
unsigned char arr_13 [13] [13] [13] [13] [13] ;
signed char arr_22 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)34719 : (unsigned short)44468;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 3493547207763536273LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)215;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (signed char)-46;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)56396 : (unsigned short)46639;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -6929024173342940210LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)38 : (unsigned char)142;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = (signed char)31;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = (unsigned char)75;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_18 [i_0] = (signed char)127;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned short)17262;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_21 [i_0] [i_1] = (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)220 : (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned char)168 : (unsigned char)133;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_22 [i_0] = (signed char)-116;
}

void checksum() {
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
