#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8773897935960086687ULL;
unsigned short var_1 = (unsigned short)744;
unsigned short var_2 = (unsigned short)65214;
short var_3 = (short)7797;
signed char var_4 = (signed char)4;
long long int var_5 = 6773854439082431912LL;
int var_6 = -356027711;
unsigned char var_7 = (unsigned char)180;
unsigned int var_8 = 1519051715U;
unsigned short var_9 = (unsigned short)37389;
unsigned short var_10 = (unsigned short)31149;
unsigned char var_11 = (unsigned char)137;
unsigned char var_12 = (unsigned char)69;
int zero = 0;
unsigned char var_13 = (unsigned char)254;
unsigned short var_14 = (unsigned short)49172;
unsigned short var_15 = (unsigned short)58977;
signed char var_16 = (signed char)33;
long long int var_17 = 6598137667784044441LL;
signed char var_18 = (signed char)113;
unsigned short var_19 = (unsigned short)33455;
long long int var_20 = -8590550696209493896LL;
unsigned int var_21 = 180705717U;
unsigned int var_22 = 3559248638U;
unsigned long long int var_23 = 14286515859796437632ULL;
unsigned char var_24 = (unsigned char)23;
unsigned long long int var_25 = 17960291402436491367ULL;
unsigned short var_26 = (unsigned short)19555;
short var_27 = (short)16633;
unsigned short var_28 = (unsigned short)41526;
unsigned char var_29 = (unsigned char)1;
signed char var_30 = (signed char)-41;
_Bool arr_3 [22] [22] ;
unsigned int arr_5 [22] [22] [22] [22] ;
_Bool arr_7 [22] [22] [22] ;
unsigned char arr_11 [22] [22] [22] [22] ;
unsigned int arr_12 [22] [22] [22] ;
_Bool arr_13 [22] ;
unsigned char arr_20 [22] ;
unsigned short arr_21 [22] ;
unsigned int arr_33 [11] [11] ;
_Bool arr_8 [22] [22] [22] ;
signed char arr_17 [22] [22] ;
unsigned long long int arr_37 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 36870354U : 2701019600U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (unsigned char)86;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2744019381U : 3548079695U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (unsigned char)89 : (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_21 [i_0] = (unsigned short)54839;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_33 [i_0] [i_1] = 3103325413U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-13 : (signed char)-82;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_37 [i_0] = (i_0 % 2 == 0) ? 14915509709390207849ULL : 11361855351364533722ULL;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_37 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
