#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8682209639399227099LL;
signed char var_2 = (signed char)72;
unsigned short var_3 = (unsigned short)614;
int var_4 = 213352991;
unsigned int var_5 = 4205208021U;
long long int var_7 = -6564959824979045301LL;
unsigned char var_8 = (unsigned char)18;
_Bool var_9 = (_Bool)1;
int zero = 0;
_Bool var_11 = (_Bool)1;
long long int var_12 = 1089925384173986406LL;
long long int var_13 = 2966078878780438084LL;
long long int var_14 = -3216743104226432659LL;
unsigned int var_15 = 452696783U;
long long int var_16 = -5146275511948973836LL;
long long int var_17 = -6534479753269277001LL;
short var_18 = (short)-353;
unsigned long long int var_19 = 1576275992556591599ULL;
unsigned int var_20 = 2745573060U;
signed char var_21 = (signed char)62;
_Bool var_22 = (_Bool)1;
signed char arr_0 [14] ;
_Bool arr_1 [14] ;
unsigned int arr_7 [14] ;
long long int arr_10 [15] ;
signed char arr_11 [15] ;
unsigned long long int arr_2 [14] [14] ;
int arr_9 [14] ;
int arr_12 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (signed char)115;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 2804679790U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = -7675378577694581825LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (signed char)-88;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 18103010778861535293ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = 773454193;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = 1851816599;
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
