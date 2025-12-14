#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1709208659;
unsigned int var_1 = 2492282357U;
unsigned char var_2 = (unsigned char)27;
unsigned char var_4 = (unsigned char)191;
int var_5 = -644226562;
int var_6 = 1295267050;
long long int var_8 = 3136042202107111535LL;
short var_9 = (short)-8531;
unsigned char var_10 = (unsigned char)143;
signed char var_11 = (signed char)0;
unsigned char var_12 = (unsigned char)32;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_14 = 530435935;
unsigned int var_15 = 4242650027U;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-63;
_Bool var_18 = (_Bool)0;
_Bool arr_0 [21] [21] ;
short arr_1 [21] ;
long long int arr_2 [21] ;
short arr_3 [21] ;
unsigned long long int arr_4 [21] ;
unsigned short arr_5 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)-21132 : (short)-19438;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -7768923017444953583LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)8865 : (short)-25522;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 11866787814898274036ULL : 10065431580624726501ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)20998 : (unsigned short)41501;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
