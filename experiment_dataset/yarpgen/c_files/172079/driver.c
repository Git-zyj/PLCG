#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1677081907;
unsigned long long int var_6 = 14120559291267758233ULL;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)0;
unsigned char var_11 = (unsigned char)191;
long long int var_12 = -1184476276573725077LL;
unsigned long long int var_13 = 15251581209451255616ULL;
unsigned short var_14 = (unsigned short)46772;
unsigned short var_16 = (unsigned short)27141;
int zero = 0;
unsigned long long int var_19 = 7989496009304811199ULL;
signed char var_20 = (signed char)54;
unsigned char var_21 = (unsigned char)54;
unsigned char var_22 = (unsigned char)79;
int var_23 = 609280055;
short arr_1 [16] [16] ;
long long int arr_4 [16] [16] ;
signed char arr_5 [16] ;
unsigned long long int arr_8 [16] [16] ;
unsigned long long int arr_9 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-8054;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 7212058158158339608LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (signed char)62;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = 15889188577385732008ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = 11241235354098798783ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
