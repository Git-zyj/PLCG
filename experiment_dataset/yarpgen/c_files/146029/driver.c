#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -5526623674403548360LL;
unsigned char var_2 = (unsigned char)136;
unsigned char var_3 = (unsigned char)154;
unsigned char var_4 = (unsigned char)19;
_Bool var_6 = (_Bool)0;
int var_8 = 485870140;
unsigned char var_9 = (unsigned char)158;
unsigned char var_10 = (unsigned char)2;
int zero = 0;
unsigned long long int var_11 = 13051733157832848185ULL;
unsigned long long int var_12 = 9082573816104532139ULL;
unsigned char var_13 = (unsigned char)59;
unsigned char var_14 = (unsigned char)173;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)155;
long long int arr_0 [22] ;
signed char arr_1 [22] ;
signed char arr_2 [22] ;
long long int arr_3 [22] ;
unsigned char arr_4 [22] ;
unsigned int arr_5 [22] ;
signed char arr_6 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -5948680657787277246LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)-67;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)-69;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = -8609917195812007300LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 1545812370U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-82;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
