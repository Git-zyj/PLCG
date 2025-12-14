#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3307121776U;
short var_2 = (short)-8511;
unsigned int var_3 = 2659183317U;
long long int var_4 = 4887690011708506657LL;
unsigned char var_5 = (unsigned char)90;
unsigned long long int var_6 = 8487552413543735894ULL;
long long int var_7 = 7641369146184137304LL;
short var_8 = (short)-31449;
short var_9 = (short)-28636;
unsigned long long int var_10 = 8809948670749440177ULL;
int zero = 0;
unsigned long long int var_11 = 16223712615460525116ULL;
unsigned int var_12 = 3465952062U;
int var_13 = 1424780170;
long long int var_14 = 5446446251013521308LL;
unsigned short var_15 = (unsigned short)13384;
unsigned long long int var_16 = 18424671295835941625ULL;
unsigned short var_17 = (unsigned short)40660;
unsigned char var_18 = (unsigned char)193;
unsigned char var_19 = (unsigned char)119;
unsigned char var_20 = (unsigned char)115;
signed char arr_0 [14] ;
unsigned short arr_1 [14] ;
signed char arr_2 [14] ;
unsigned long long int arr_3 [14] [14] ;
short arr_6 [16] ;
unsigned char arr_7 [16] [16] ;
_Bool arr_9 [16] ;
unsigned short arr_10 [16] ;
_Bool arr_4 [14] ;
unsigned char arr_5 [14] ;
signed char arr_8 [16] [16] ;
signed char arr_11 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (signed char)55;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned short)45123;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)-121;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 14144721271640190430ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (short)-18233;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)110;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (unsigned short)3296;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (unsigned char)222;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-115;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (signed char)-110;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
