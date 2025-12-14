#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2127331366;
long long int var_3 = 3346087714519625449LL;
int var_4 = 1836554909;
unsigned int var_6 = 1306778596U;
signed char var_8 = (signed char)-99;
signed char var_12 = (signed char)103;
int zero = 0;
unsigned short var_17 = (unsigned short)20974;
unsigned short var_18 = (unsigned short)56003;
_Bool var_19 = (_Bool)1;
int var_20 = -799510490;
int var_21 = -2054861473;
unsigned char var_22 = (unsigned char)172;
int var_23 = -1860237810;
unsigned short var_24 = (unsigned short)7140;
unsigned long long int var_25 = 14109860260097959360ULL;
unsigned char arr_0 [15] ;
int arr_1 [15] ;
unsigned short arr_5 [24] ;
unsigned short arr_6 [24] [24] ;
unsigned short arr_8 [20] ;
_Bool arr_9 [20] ;
unsigned long long int arr_4 [10] [10] ;
unsigned short arr_10 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 1533872538;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned short)59912;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)17321;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (unsigned short)58884;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 353356751126516470ULL : 6313718248785771656ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (unsigned short)64136;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
