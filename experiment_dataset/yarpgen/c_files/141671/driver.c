#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1844785472342403384ULL;
unsigned char var_2 = (unsigned char)183;
unsigned long long int var_4 = 16480423640071768072ULL;
unsigned long long int var_5 = 665504058809421943ULL;
short var_6 = (short)11492;
unsigned long long int var_7 = 10411759874085234792ULL;
long long int var_10 = 5063147558351499327LL;
signed char var_11 = (signed char)-50;
unsigned char var_12 = (unsigned char)235;
int zero = 0;
int var_13 = -979182146;
unsigned char var_14 = (unsigned char)131;
unsigned int var_15 = 1233996948U;
unsigned long long int var_16 = 14926733844851288779ULL;
long long int var_17 = -4585389812370971717LL;
short var_18 = (short)8579;
unsigned short var_19 = (unsigned short)49911;
unsigned char var_20 = (unsigned char)109;
_Bool arr_0 [18] [18] ;
long long int arr_2 [18] ;
unsigned int arr_3 [18] [18] [18] ;
signed char arr_4 [18] [18] ;
unsigned char arr_6 [15] ;
unsigned long long int arr_7 [15] ;
long long int arr_8 [15] [15] [15] ;
long long int arr_9 [15] [15] [15] ;
long long int arr_10 [15] ;
long long int arr_5 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 8100392450271973228LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3367644358U : 637449865U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)4 : (signed char)41;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (unsigned char)21;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 16781966907200937555ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 8183348987690702120LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 1272497621276585222LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = 3149535067308920117LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? -8517060048377295814LL : -4517076067811376545LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
