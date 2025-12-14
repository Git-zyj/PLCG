#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6580840279097104533ULL;
_Bool var_1 = (_Bool)1;
unsigned int var_3 = 2314833604U;
unsigned short var_5 = (unsigned short)3995;
unsigned short var_6 = (unsigned short)22447;
short var_8 = (short)-7156;
unsigned int var_9 = 3283301498U;
short var_11 = (short)-11268;
int zero = 0;
unsigned int var_13 = 2418061195U;
short var_14 = (short)-27238;
unsigned short var_15 = (unsigned short)40085;
unsigned short var_16 = (unsigned short)17503;
_Bool var_17 = (_Bool)1;
short var_18 = (short)3346;
unsigned short arr_0 [17] [17] ;
short arr_1 [17] ;
unsigned int arr_2 [17] ;
short arr_3 [17] ;
unsigned short arr_4 [17] [17] ;
_Bool arr_5 [18] ;
unsigned long long int arr_6 [18] ;
unsigned long long int arr_10 [15] ;
unsigned short arr_7 [18] ;
unsigned int arr_8 [18] ;
_Bool arr_9 [18] ;
unsigned int arr_12 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)39481;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (short)17619;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1729035279U : 2250155622U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (short)-32049;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)50787;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 10124774500695272163ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = 10397146137135976976ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (unsigned short)60595;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = 2343038953U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 2949764951U : 3841425786U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
