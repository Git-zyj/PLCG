#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)5;
unsigned int var_2 = 3668267422U;
long long int var_3 = 961531936576460369LL;
long long int var_5 = -5447365969516551088LL;
short var_9 = (short)-32487;
int zero = 0;
unsigned int var_10 = 3006224042U;
signed char var_11 = (signed char)-60;
unsigned int var_12 = 3240462287U;
signed char var_13 = (signed char)-64;
unsigned char var_14 = (unsigned char)33;
signed char var_15 = (signed char)98;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)83;
_Bool var_18 = (_Bool)1;
_Bool arr_1 [17] ;
unsigned char arr_2 [17] ;
unsigned short arr_5 [17] ;
unsigned long long int arr_7 [18] ;
unsigned char arr_8 [18] [18] ;
_Bool arr_9 [18] ;
signed char arr_3 [17] [17] ;
int arr_10 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (unsigned short)32832;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 6860320677216565250ULL : 17232339318327750294ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)190 : (unsigned char)93;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)124;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? -402099964 : 578740140;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
