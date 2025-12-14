#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)164;
_Bool var_2 = (_Bool)0;
unsigned char var_5 = (unsigned char)28;
long long int var_6 = 4619123360678253197LL;
unsigned short var_7 = (unsigned short)49427;
signed char var_10 = (signed char)103;
int zero = 0;
unsigned char var_11 = (unsigned char)170;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)58552;
_Bool var_14 = (_Bool)0;
unsigned int arr_0 [10] ;
signed char arr_2 [10] ;
long long int arr_3 [10] ;
_Bool arr_7 [15] ;
unsigned long long int arr_11 [14] ;
int arr_4 [10] ;
unsigned short arr_5 [10] ;
unsigned char arr_8 [15] ;
unsigned char arr_9 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 1177128746U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)-34;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 2231071759541725598LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = 12622760392209794775ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = -636831613;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned short)64762;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)248 : (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)208 : (unsigned char)70;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
