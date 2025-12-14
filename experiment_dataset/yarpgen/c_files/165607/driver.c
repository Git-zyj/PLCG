#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1969460611;
int var_5 = -2013493003;
unsigned short var_7 = (unsigned short)63139;
int var_9 = 778640068;
int zero = 0;
long long int var_10 = 1786099903714965079LL;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 3916769320U;
unsigned short var_13 = (unsigned short)10803;
unsigned short var_14 = (unsigned short)38276;
unsigned int var_15 = 1700828722U;
unsigned long long int var_16 = 14612634840101732054ULL;
unsigned short var_17 = (unsigned short)18046;
unsigned char var_18 = (unsigned char)67;
unsigned char var_19 = (unsigned char)37;
int arr_1 [20] ;
unsigned long long int arr_2 [20] [20] ;
unsigned char arr_4 [15] ;
unsigned int arr_5 [15] ;
unsigned int arr_8 [15] ;
_Bool arr_9 [15] ;
unsigned int arr_10 [15] ;
unsigned int arr_11 [15] [15] ;
unsigned short arr_16 [15] ;
unsigned char arr_3 [20] ;
int arr_6 [15] ;
_Bool arr_7 [15] ;
unsigned char arr_12 [15] ;
int arr_17 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -1831236188 : 1573985459;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 10595571771883558855ULL : 6497239921351857219ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 2632690452U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = 653205296U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = 2874173806U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = 1548906090U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = (unsigned short)27352;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)41 : (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 9146915;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (unsigned char)128;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_17 [i_0] [i_1] = 1239137076;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
