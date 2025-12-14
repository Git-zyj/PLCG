#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = -7963702323627297686LL;
unsigned long long int var_2 = 8080014113928145497ULL;
int var_3 = 1110479833;
unsigned short var_4 = (unsigned short)22979;
short var_6 = (short)15995;
signed char var_9 = (signed char)104;
unsigned short var_10 = (unsigned short)16431;
int zero = 0;
unsigned short var_11 = (unsigned short)11231;
unsigned char var_12 = (unsigned char)8;
short var_13 = (short)3236;
int var_14 = 1568427105;
signed char var_15 = (signed char)5;
unsigned short var_16 = (unsigned short)31316;
signed char var_17 = (signed char)-94;
unsigned char var_18 = (unsigned char)156;
unsigned char var_19 = (unsigned char)32;
unsigned char var_20 = (unsigned char)217;
short arr_0 [23] ;
unsigned short arr_1 [23] ;
unsigned short arr_2 [23] ;
signed char arr_4 [23] ;
unsigned short arr_5 [23] [23] ;
signed char arr_7 [23] ;
long long int arr_14 [23] [23] [23] ;
unsigned long long int arr_16 [23] ;
unsigned long long int arr_3 [23] ;
_Bool arr_12 [23] ;
signed char arr_19 [23] [23] [23] [23] ;
int arr_22 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (short)-32034;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)9750;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)22865;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (signed char)111;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)59289;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (signed char)-121;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = -3208832855836779272LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = 12260597159088545295ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 11575290876292439729ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)-74 : (signed char)27;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_22 [i_0] = -662548427;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
