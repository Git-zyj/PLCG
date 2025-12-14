#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)78;
unsigned int var_3 = 3560586404U;
unsigned short var_7 = (unsigned short)2266;
long long int var_9 = 5362292501805864851LL;
unsigned short var_11 = (unsigned short)62170;
unsigned int var_13 = 2057649857U;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-77;
unsigned char var_16 = (unsigned char)192;
int zero = 0;
unsigned long long int var_18 = 18425870219767758728ULL;
unsigned int var_19 = 1017045921U;
short var_20 = (short)-22649;
unsigned int var_21 = 584362227U;
int var_22 = 1856064892;
unsigned int arr_0 [16] ;
unsigned short arr_2 [16] [16] ;
unsigned long long int arr_4 [16] [16] ;
int arr_6 [24] [24] ;
short arr_7 [24] ;
long long int arr_8 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 903970774U : 1670538314U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)28321;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 14778773386980359870ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = 1189188208;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (short)-4578;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = 1956363888793306076LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
