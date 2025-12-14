#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)71;
unsigned int var_1 = 1516853750U;
int var_2 = 1646078023;
unsigned short var_3 = (unsigned short)3412;
signed char var_6 = (signed char)13;
unsigned short var_7 = (unsigned short)60778;
unsigned int var_8 = 3216883760U;
unsigned char var_12 = (unsigned char)114;
int zero = 0;
unsigned int var_14 = 3960458369U;
long long int var_15 = -7880048690224908165LL;
unsigned short var_16 = (unsigned short)38533;
unsigned int var_17 = 1902005001U;
_Bool var_18 = (_Bool)1;
long long int arr_0 [22] ;
long long int arr_1 [22] ;
long long int arr_2 [22] ;
signed char arr_5 [13] ;
int arr_7 [13] ;
unsigned char arr_8 [13] ;
long long int arr_9 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -6559249719818024739LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 3465258956836646626LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 3903134468904402620LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (signed char)79;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = 376929743;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (unsigned char)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = -4548169730998485841LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
