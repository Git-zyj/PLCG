#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)105;
signed char var_1 = (signed char)46;
unsigned char var_5 = (unsigned char)195;
unsigned char var_7 = (unsigned char)153;
int var_8 = -1798095768;
unsigned long long int var_9 = 3227190486876383341ULL;
unsigned char var_10 = (unsigned char)243;
unsigned long long int var_11 = 4624151253611752403ULL;
unsigned long long int var_12 = 14483684335756515309ULL;
signed char var_13 = (signed char)-88;
int zero = 0;
signed char var_15 = (signed char)117;
unsigned int var_16 = 144505451U;
int var_17 = -1543207986;
unsigned int var_18 = 3469437045U;
unsigned int var_19 = 2650364591U;
unsigned int arr_0 [16] ;
int arr_1 [16] ;
unsigned long long int arr_3 [15] ;
signed char arr_4 [15] [15] ;
unsigned int arr_2 [16] [16] ;
int arr_5 [15] ;
int arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 3034747002U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 786076569;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 652424982005078976ULL : 13656113621228267830ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)110;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 2782100717U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -162502700 : -1612793202;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 1764466476 : 1248435340;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
