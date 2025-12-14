#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)35042;
short var_6 = (short)25802;
unsigned int var_7 = 1445789172U;
_Bool var_8 = (_Bool)0;
short var_9 = (short)18495;
unsigned short var_10 = (unsigned short)36901;
signed char var_11 = (signed char)58;
int zero = 0;
int var_18 = -19230421;
long long int var_19 = -2020526690294681562LL;
unsigned int var_20 = 3385145800U;
_Bool var_21 = (_Bool)1;
long long int var_22 = -148470196514177712LL;
int var_23 = 1566933995;
unsigned int var_24 = 506122978U;
short var_25 = (short)21430;
_Bool var_26 = (_Bool)1;
signed char var_27 = (signed char)115;
long long int var_28 = 7459223196557886188LL;
unsigned char var_29 = (unsigned char)31;
unsigned char var_30 = (unsigned char)59;
signed char arr_0 [12] ;
unsigned long long int arr_1 [12] ;
unsigned char arr_3 [23] ;
unsigned char arr_4 [23] [23] ;
short arr_5 [23] ;
short arr_7 [10] ;
signed char arr_8 [10] [10] ;
_Bool arr_9 [10] [10] [10] ;
unsigned char arr_13 [10] [10] [10] [10] ;
int arr_16 [12] ;
long long int arr_17 [12] [12] ;
unsigned char arr_18 [12] ;
unsigned long long int arr_2 [12] [12] ;
unsigned int arr_6 [23] ;
unsigned short arr_15 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)-10;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 15602501394915993739ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned char)25;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (short)-9880;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (short)21453;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)37;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned char)248;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = -834529999;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_17 [i_0] [i_1] = -7198740555155924130LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_18 [i_0] = (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 16367146883918239059ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 329587519U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_15 [i_0] = (unsigned short)19942;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
