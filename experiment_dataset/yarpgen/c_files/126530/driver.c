#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)65;
long long int var_3 = -5437293302083723413LL;
unsigned long long int var_10 = 12306686183606259957ULL;
long long int var_11 = 474144368131894383LL;
unsigned char var_12 = (unsigned char)10;
int zero = 0;
unsigned char var_14 = (unsigned char)244;
long long int var_15 = -3025100417148816290LL;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)38746;
long long int var_18 = 3977232470253284327LL;
int var_19 = -1349973558;
short var_20 = (short)9636;
int var_21 = 376272399;
signed char var_22 = (signed char)60;
_Bool var_23 = (_Bool)1;
short arr_0 [17] ;
unsigned int arr_1 [17] ;
_Bool arr_4 [14] [14] ;
signed char arr_6 [15] [15] ;
unsigned int arr_8 [15] ;
unsigned long long int arr_9 [15] ;
int arr_2 [17] ;
long long int arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (short)30826;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 2079635009U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)38;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = 3079551197U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = 3775755564558080282ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = -2030544604;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = -8777188085296485782LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
