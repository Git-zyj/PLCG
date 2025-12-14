#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22561;
unsigned short var_1 = (unsigned short)30446;
signed char var_3 = (signed char)-7;
int var_5 = -720156208;
unsigned int var_8 = 3030538718U;
unsigned char var_9 = (unsigned char)144;
unsigned short var_10 = (unsigned short)39378;
_Bool var_11 = (_Bool)0;
short var_13 = (short)-16873;
short var_14 = (short)4886;
unsigned char var_16 = (unsigned char)36;
unsigned long long int var_17 = 18021232761568736857ULL;
int zero = 0;
unsigned long long int var_19 = 2636923623134128753ULL;
short var_20 = (short)-8341;
unsigned long long int var_21 = 1396458846927150485ULL;
unsigned char var_22 = (unsigned char)85;
short arr_1 [19] ;
unsigned char arr_3 [19] ;
unsigned short arr_4 [19] [19] ;
short arr_5 [19] [19] ;
unsigned long long int arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (short)-17160;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned char)13;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)38694;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-9485;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 2967347176565550718ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
