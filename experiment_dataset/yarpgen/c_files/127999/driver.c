#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3572326045299205550ULL;
unsigned char var_2 = (unsigned char)177;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)105;
_Bool var_8 = (_Bool)1;
unsigned char var_11 = (unsigned char)72;
unsigned int var_15 = 2825271016U;
int zero = 0;
unsigned int var_20 = 3914408094U;
unsigned char var_21 = (unsigned char)45;
unsigned int var_22 = 4084088969U;
unsigned char var_23 = (unsigned char)74;
unsigned char var_24 = (unsigned char)16;
unsigned char var_25 = (unsigned char)98;
unsigned char var_26 = (unsigned char)79;
unsigned int var_27 = 455473114U;
unsigned char arr_0 [16] ;
_Bool arr_1 [16] [16] ;
unsigned int arr_5 [20] ;
unsigned int arr_6 [20] ;
_Bool arr_9 [20] ;
unsigned char arr_2 [16] ;
unsigned char arr_7 [20] ;
_Bool arr_11 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 1691945320U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 1418249658U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)143;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
