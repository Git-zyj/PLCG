#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9113010405448222700LL;
signed char var_1 = (signed char)-118;
short var_3 = (short)8558;
short var_5 = (short)1178;
long long int var_6 = 8759224229326046743LL;
unsigned long long int var_7 = 8257309715906684080ULL;
unsigned long long int var_8 = 1215255025406896025ULL;
int var_9 = 307593024;
long long int var_10 = -5360008593090463401LL;
unsigned long long int var_11 = 16900129016051049081ULL;
unsigned short var_12 = (unsigned short)39794;
int var_13 = 500142486;
_Bool var_14 = (_Bool)0;
long long int var_15 = 7603510028003083899LL;
int zero = 0;
unsigned char var_17 = (unsigned char)161;
signed char var_18 = (signed char)-79;
signed char var_19 = (signed char)-97;
signed char var_20 = (signed char)72;
unsigned long long int var_21 = 2916658401564771086ULL;
unsigned short var_22 = (unsigned short)37298;
short var_23 = (short)22796;
unsigned char var_24 = (unsigned char)222;
short var_25 = (short)-25279;
unsigned char var_26 = (unsigned char)153;
int var_27 = 732171149;
unsigned char var_28 = (unsigned char)85;
short arr_0 [20] ;
unsigned short arr_2 [20] [20] ;
long long int arr_3 [20] ;
unsigned long long int arr_7 [25] ;
long long int arr_8 [25] ;
unsigned char arr_9 [25] ;
short arr_10 [13] [13] ;
long long int arr_12 [13] ;
unsigned char arr_16 [12] ;
unsigned char arr_22 [12] ;
_Bool arr_24 [12] [12] [12] ;
signed char arr_5 [20] [20] [20] ;
short arr_6 [20] [20] ;
short arr_13 [13] ;
unsigned char arr_17 [12] ;
short arr_20 [12] [12] [12] ;
unsigned char arr_23 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)-28260 : (short)-15862;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)65381;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 8778715661670695044LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 122326197987886316ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = -5395246151141598974LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (unsigned char)17;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = (short)32663;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = -438145524482708712LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_22 [i_0] = (unsigned char)249;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-36 : (signed char)49;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-5399 : (short)7601;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = (short)22004;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (unsigned char)110 : (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-8308 : (short)-14006;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_23 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)230 : (unsigned char)70;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
