#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1534532768375266935ULL;
short var_1 = (short)-31657;
_Bool var_4 = (_Bool)0;
short var_7 = (short)19190;
signed char var_8 = (signed char)30;
short var_9 = (short)1897;
_Bool var_10 = (_Bool)0;
short var_12 = (short)-7375;
int var_13 = 452128920;
unsigned long long int var_14 = 11989082206016867728ULL;
unsigned long long int var_15 = 12873981209088986413ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)49578;
int var_17 = -824449780;
unsigned char var_18 = (unsigned char)213;
unsigned int var_19 = 2379253869U;
long long int var_20 = -3230302483453105374LL;
unsigned long long int arr_1 [15] ;
signed char arr_2 [15] ;
_Bool arr_3 [15] ;
unsigned long long int arr_4 [15] ;
unsigned long long int arr_5 [15] ;
signed char arr_7 [15] [15] ;
unsigned short arr_8 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 376373862442492333ULL : 2200209947923171527ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (signed char)68;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 14977959488973854987ULL : 14393081897257801756ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 17557138367109267157ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-60 : (signed char)40;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)11820 : (unsigned short)33394;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
