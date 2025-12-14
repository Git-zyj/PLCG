#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-40;
signed char var_2 = (signed char)-53;
long long int var_4 = 2731670867097322024LL;
unsigned int var_6 = 1184314191U;
unsigned short var_8 = (unsigned short)53780;
unsigned short var_11 = (unsigned short)19062;
long long int var_12 = 3304314443297231180LL;
unsigned int var_13 = 291690845U;
unsigned long long int var_14 = 12189478972080259075ULL;
int zero = 0;
long long int var_15 = 278060005154177040LL;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-82;
signed char var_18 = (signed char)58;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)118;
unsigned int var_21 = 3850622209U;
signed char var_22 = (signed char)-86;
short var_23 = (short)1175;
long long int var_24 = -864945736818413811LL;
unsigned char var_25 = (unsigned char)59;
unsigned int var_26 = 2379687717U;
unsigned int arr_0 [21] ;
_Bool arr_1 [21] ;
signed char arr_2 [21] ;
unsigned long long int arr_5 [12] [12] ;
_Bool arr_7 [12] [12] ;
int arr_10 [12] [12] ;
unsigned char arr_13 [12] [12] ;
int arr_16 [23] ;
unsigned long long int arr_8 [12] ;
unsigned short arr_11 [12] [12] ;
unsigned char arr_14 [12] [12] ;
unsigned int arr_18 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 2222193982U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (signed char)-107;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = 5330342959211262786ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = 1246387741;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? -1012749027 : -1075773959;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = 16531324947456013531ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)1647;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)43;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 1217606953U : 2452735928U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
