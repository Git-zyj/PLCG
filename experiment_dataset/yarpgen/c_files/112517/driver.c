#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1593730386;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 13445870891466159265ULL;
signed char var_3 = (signed char)-26;
unsigned short var_4 = (unsigned short)38175;
unsigned long long int var_5 = 8614570513097817079ULL;
int var_6 = 1456336107;
unsigned char var_7 = (unsigned char)213;
unsigned char var_9 = (unsigned char)95;
unsigned char var_10 = (unsigned char)47;
int var_11 = 979712700;
unsigned short var_12 = (unsigned short)29082;
int var_13 = -1191962221;
signed char var_14 = (signed char)64;
int zero = 0;
unsigned char var_17 = (unsigned char)153;
unsigned char var_18 = (unsigned char)65;
unsigned char var_19 = (unsigned char)201;
unsigned short var_20 = (unsigned short)16936;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)242;
signed char var_23 = (signed char)70;
unsigned short var_24 = (unsigned short)46056;
signed char var_25 = (signed char)-37;
unsigned char var_26 = (unsigned char)177;
int var_27 = 1118415987;
unsigned char var_28 = (unsigned char)66;
int var_29 = -34727688;
unsigned char var_30 = (unsigned char)68;
unsigned char var_31 = (unsigned char)255;
unsigned char var_32 = (unsigned char)171;
unsigned char var_33 = (unsigned char)14;
int var_34 = 1697579271;
unsigned short var_35 = (unsigned short)3423;
_Bool var_36 = (_Bool)0;
_Bool var_37 = (_Bool)1;
unsigned short var_38 = (unsigned short)26743;
int var_39 = -1071621205;
int var_40 = 1265494713;
unsigned short var_41 = (unsigned short)29229;
unsigned char var_42 = (unsigned char)197;
unsigned long long int var_43 = 4033057173617155250ULL;
int arr_0 [11] ;
int arr_1 [11] ;
unsigned char arr_2 [11] ;
int arr_3 [11] ;
_Bool arr_5 [11] [11] ;
signed char arr_7 [11] ;
int arr_10 [11] [11] [11] [11] ;
_Bool arr_19 [11] [11] [11] ;
unsigned long long int arr_22 [11] ;
unsigned char arr_25 [11] [11] [11] [11] [11] ;
unsigned char arr_28 [11] [11] ;
signed char arr_30 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -1872004907;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -2129814813;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = -554656545;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (signed char)19;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = -1031368084;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 6780794249719461020ULL : 14356816923322380248ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (unsigned char)225 : (unsigned char)14;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_28 [i_0] [i_1] = (unsigned char)181;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-31 : (signed char)109;
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
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
