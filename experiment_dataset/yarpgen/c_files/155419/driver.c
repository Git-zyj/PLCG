#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)116;
unsigned char var_1 = (unsigned char)210;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 1472583371U;
int var_9 = 563743126;
unsigned int var_10 = 4088697999U;
unsigned short var_15 = (unsigned short)31915;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 3714645418U;
int zero = 0;
unsigned int var_20 = 3142604026U;
unsigned char var_21 = (unsigned char)43;
unsigned short var_22 = (unsigned short)19094;
unsigned short var_23 = (unsigned short)3233;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)1;
unsigned short var_26 = (unsigned short)39243;
unsigned int arr_0 [22] [22] ;
signed char arr_1 [22] [22] ;
short arr_3 [16] [16] ;
unsigned int arr_4 [16] ;
unsigned long long int arr_8 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 3023453655U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)110;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-998;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 3040319426U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = 406687475840465321ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
