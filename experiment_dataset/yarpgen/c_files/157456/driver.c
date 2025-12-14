#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2200809345080539408LL;
unsigned short var_1 = (unsigned short)38957;
unsigned char var_2 = (unsigned char)157;
int var_3 = 87830455;
unsigned int var_4 = 1931178483U;
signed char var_5 = (signed char)124;
long long int var_6 = -3179683504028581537LL;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)33029;
long long int var_10 = -2249302391587587074LL;
long long int var_11 = -820884941610409067LL;
unsigned short var_12 = (unsigned short)55356;
signed char var_13 = (signed char)66;
int zero = 0;
short var_14 = (short)-26394;
signed char var_15 = (signed char)21;
short var_16 = (short)-3221;
long long int var_17 = 1427388545846538600LL;
unsigned char var_18 = (unsigned char)188;
_Bool var_19 = (_Bool)1;
long long int var_20 = -674183774664725298LL;
short var_21 = (short)-480;
unsigned short arr_2 [21] ;
short arr_3 [21] [21] [21] ;
long long int arr_4 [21] [21] [21] ;
long long int arr_5 [21] [21] [21] ;
long long int arr_9 [20] ;
short arr_13 [20] [20] [20] [20] ;
short arr_22 [11] ;
unsigned short arr_25 [22] [22] ;
signed char arr_26 [22] [22] ;
signed char arr_27 [22] ;
long long int arr_28 [22] ;
unsigned char arr_30 [22] [22] ;
unsigned short arr_6 [21] [21] [21] ;
int arr_7 [21] ;
short arr_8 [21] ;
long long int arr_18 [20] ;
unsigned short arr_23 [11] ;
unsigned char arr_24 [11] ;
short arr_29 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned short)57115;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)-26223;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 447537403129074695LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -5446223491840250463LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = 6907505683461648591LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)-21662 : (short)-3052;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_22 [i_0] = (short)-4675;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_25 [i_0] [i_1] = (unsigned short)53929;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_26 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)104 : (signed char)117;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_27 [i_0] = (signed char)60;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_28 [i_0] = -6859138108318643126LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_30 [i_0] [i_1] = (unsigned char)125;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)30682;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = -1259524297;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (short)2956;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 8349485954281437643LL : 4864641845081195376LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_23 [i_0] = (unsigned short)27210;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_24 [i_0] = (unsigned char)252;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? (short)-14354 : (short)-29001;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_29 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
