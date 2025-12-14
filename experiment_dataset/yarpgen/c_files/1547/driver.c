#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1262989684568741696LL;
long long int var_2 = 276202542425701722LL;
unsigned long long int var_4 = 6624397521556420255ULL;
unsigned int var_5 = 1334267376U;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)30969;
signed char var_11 = (signed char)112;
int zero = 0;
unsigned short var_12 = (unsigned short)15846;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 17041810096605239838ULL;
unsigned long long int var_15 = 8035927000873439529ULL;
short var_16 = (short)26525;
unsigned short var_17 = (unsigned short)64108;
long long int arr_0 [13] ;
long long int arr_1 [13] [13] ;
long long int arr_2 [13] ;
unsigned char arr_4 [13] [13] ;
unsigned short arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -6619878961110639613LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 115497816822801166LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = -8962726331916902213LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)252;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (unsigned short)38118;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
