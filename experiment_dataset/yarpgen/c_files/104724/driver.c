#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)6;
unsigned char var_1 = (unsigned char)42;
unsigned int var_2 = 3644923400U;
short var_3 = (short)25156;
short var_4 = (short)25257;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 13191907107646306300ULL;
signed char var_7 = (signed char)48;
int var_9 = 1842995799;
int zero = 0;
short var_10 = (short)16411;
short var_11 = (short)4185;
unsigned char var_12 = (unsigned char)216;
unsigned int var_13 = 62061492U;
unsigned char var_14 = (unsigned char)28;
unsigned short var_15 = (unsigned short)7355;
unsigned char var_16 = (unsigned char)104;
unsigned long long int var_17 = 5654470877870045642ULL;
int var_18 = 1910603633;
short var_19 = (short)8579;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)26315;
unsigned long long int var_22 = 13652872382094502688ULL;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)174;
unsigned char var_25 = (unsigned char)22;
int var_26 = -1248052112;
int var_27 = -1010571472;
long long int var_28 = 1818413224032709509LL;
int var_29 = -1672957706;
long long int var_30 = -7697606866398108599LL;
unsigned char var_31 = (unsigned char)215;
signed char var_32 = (signed char)-29;
short var_33 = (short)-20947;
signed char var_34 = (signed char)45;
int var_35 = 982731208;
short var_36 = (short)-7014;
unsigned int var_37 = 2061632362U;
int var_38 = 868576107;
unsigned short var_39 = (unsigned short)31053;
_Bool var_40 = (_Bool)0;
signed char var_41 = (signed char)-17;
long long int arr_4 [22] [22] ;
unsigned long long int arr_9 [22] [22] ;
unsigned short arr_15 [15] ;
_Bool arr_33 [15] [15] [15] [15] ;
signed char arr_46 [11] [11] ;
signed char arr_47 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 7684990138257005012LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = 1808290386703790064ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned short)32019 : (unsigned short)39475;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_46 [i_0] [i_1] = (signed char)64;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_47 [i_0] [i_1] = (signed char)91;
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
    hash(&seed, var_41);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_33 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_46 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_47 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
