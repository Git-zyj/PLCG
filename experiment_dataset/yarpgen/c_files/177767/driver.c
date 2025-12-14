#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)64;
long long int var_1 = -6007889374498550981LL;
unsigned long long int var_3 = 2123124173912755137ULL;
unsigned int var_5 = 2461332695U;
unsigned int var_7 = 911189396U;
unsigned int var_8 = 1266686937U;
unsigned char var_10 = (unsigned char)78;
int zero = 0;
unsigned short var_11 = (unsigned short)41663;
unsigned long long int var_12 = 9272146649369833252ULL;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)114;
unsigned short var_15 = (unsigned short)3432;
unsigned int var_16 = 807864274U;
unsigned char arr_2 [14] ;
unsigned int arr_3 [23] ;
unsigned char arr_4 [23] [23] ;
unsigned char arr_6 [23] [23] [23] ;
long long int arr_7 [23] [23] ;
unsigned int arr_9 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)54 : (unsigned char)177;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 3768711165U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = 5360674400667125158LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = 1388792451U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
