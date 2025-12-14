#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 502077346447838044ULL;
long long int var_3 = -8825480216552687343LL;
unsigned char var_4 = (unsigned char)176;
unsigned int var_7 = 1582005590U;
long long int var_8 = 3195479679884631224LL;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)19521;
int var_11 = -188835282;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_13 = 17772915472548695251ULL;
unsigned char var_14 = (unsigned char)241;
unsigned long long int var_15 = 11359528592686742084ULL;
int var_16 = -1037007538;
unsigned int var_17 = 4174469575U;
unsigned int arr_2 [11] ;
int arr_3 [11] ;
int arr_6 [24] ;
signed char arr_7 [24] [24] ;
long long int arr_9 [24] ;
short arr_11 [24] [24] ;
unsigned short arr_4 [11] ;
unsigned char arr_5 [11] ;
_Bool arr_8 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 271335986U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 1708097066;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 1921403925;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)98;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = -1354013679713222073LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-1102 : (short)23406;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned short)13917;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
