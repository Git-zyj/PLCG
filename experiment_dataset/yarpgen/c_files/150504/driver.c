#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29807;
unsigned short var_1 = (unsigned short)25386;
unsigned int var_2 = 409230276U;
long long int var_3 = 9222014377247891761LL;
unsigned long long int var_4 = 682999313855629373ULL;
unsigned int var_5 = 3489090487U;
unsigned long long int var_6 = 3454398976963950224ULL;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)30099;
short var_9 = (short)-21680;
unsigned char var_10 = (unsigned char)116;
unsigned long long int var_11 = 11059906876993207074ULL;
long long int var_12 = -7894354594639055224LL;
unsigned long long int var_13 = 12163579096787620925ULL;
int zero = 0;
unsigned long long int var_14 = 4198938353931467889ULL;
unsigned long long int var_15 = 9215317976061575754ULL;
unsigned long long int var_16 = 17160622030561702446ULL;
unsigned short var_17 = (unsigned short)29325;
unsigned long long int var_18 = 15158765042790621801ULL;
int var_19 = 268873672;
_Bool var_20 = (_Bool)0;
int var_21 = -1208541899;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
unsigned long long int var_24 = 17954525009161013237ULL;
signed char var_25 = (signed char)33;
unsigned int var_26 = 3509525236U;
unsigned char var_27 = (unsigned char)181;
_Bool var_28 = (_Bool)1;
int var_29 = -1824876605;
long long int var_30 = 8650022522532421416LL;
unsigned char var_31 = (unsigned char)48;
int var_32 = -1465025385;
_Bool var_33 = (_Bool)0;
unsigned int var_34 = 1719774317U;
short var_35 = (short)-19582;
unsigned long long int arr_8 [20] [20] [20] ;
unsigned long long int arr_13 [20] [20] [20] [20] ;
_Bool arr_17 [20] [20] [20] [20] ;
signed char arr_18 [20] ;
long long int arr_28 [20] ;
signed char arr_34 [10] [10] ;
unsigned char arr_35 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 16482054308530058927ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 9962717189860690368ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_18 [i_0] = (signed char)65;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_28 [i_0] = 8414929009771251872LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_34 [i_0] [i_1] = (signed char)79;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_35 [i_0] [i_1] = (unsigned char)20;
}

void checksum() {
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
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_34 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_35 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
