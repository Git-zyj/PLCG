#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17129;
_Bool var_1 = (_Bool)1;
short var_2 = (short)31419;
long long int var_3 = 6456203457870266839LL;
signed char var_4 = (signed char)-19;
unsigned long long int var_5 = 4687138902999564630ULL;
unsigned short var_6 = (unsigned short)31062;
long long int var_9 = 2518272224520206766LL;
int zero = 0;
short var_10 = (short)1678;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 4286135727040254498ULL;
short var_13 = (short)5084;
long long int arr_0 [19] [19] ;
unsigned long long int arr_2 [19] ;
unsigned int arr_3 [19] [19] ;
short arr_4 [19] [19] ;
unsigned int arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 3095106393283287512LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 4790623300734832203ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 1265095815U : 1467167623U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)23117 : (short)430;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 2055649802U : 2983780738U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
