#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11950244150010894259ULL;
short var_1 = (short)14942;
unsigned long long int var_3 = 4094937003034142468ULL;
signed char var_4 = (signed char)-127;
short var_5 = (short)-25238;
int var_8 = 59141189;
signed char var_9 = (signed char)48;
unsigned short var_10 = (unsigned short)46075;
unsigned char var_11 = (unsigned char)69;
unsigned int var_12 = 3737351205U;
unsigned long long int var_13 = 10092878070063740931ULL;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2826653960U;
int var_17 = 34125876;
_Bool var_18 = (_Bool)0;
unsigned long long int arr_0 [22] [22] ;
long long int arr_1 [22] [22] ;
_Bool arr_3 [22] ;
long long int arr_4 [22] [22] [22] ;
unsigned char arr_5 [22] [22] ;
unsigned long long int arr_7 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 771164479006378652ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 2710378325255392870LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -4869567604176049346LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = 12658144651896272303ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
