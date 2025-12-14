#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)228;
int var_2 = -1188427687;
short var_3 = (short)10813;
long long int var_4 = 1433506087316448639LL;
unsigned int var_5 = 2398518062U;
unsigned short var_6 = (unsigned short)9837;
unsigned long long int var_7 = 10156289241362024350ULL;
_Bool var_9 = (_Bool)0;
long long int var_10 = -4502619902782109314LL;
short var_13 = (short)-9919;
unsigned int var_14 = 2769925383U;
int var_15 = -1556262626;
int var_17 = -274901746;
int var_18 = -714902126;
int zero = 0;
unsigned short var_19 = (unsigned short)6830;
int var_20 = 1431804165;
unsigned short var_21 = (unsigned short)33197;
unsigned long long int var_22 = 18072981551827027375ULL;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)69;
_Bool var_25 = (_Bool)0;
long long int var_26 = 3771490416216999325LL;
int var_27 = -661829099;
unsigned int arr_3 [10] [10] [10] ;
unsigned short arr_5 [10] [10] [10] ;
signed char arr_12 [23] ;
unsigned int arr_15 [23] [23] ;
short arr_4 [10] ;
short arr_16 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 2158769608U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)8111;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (signed char)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_15 [i_0] [i_1] = 4259629248U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (short)-26932;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-11868 : (short)-22252;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
