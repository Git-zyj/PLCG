#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7685163339765251592LL;
short var_1 = (short)-10832;
short var_2 = (short)-29186;
unsigned int var_3 = 4191395993U;
long long int var_4 = -4580519246021729720LL;
signed char var_6 = (signed char)-100;
unsigned long long int var_7 = 1164991236857304521ULL;
unsigned char var_8 = (unsigned char)128;
int zero = 0;
unsigned int var_10 = 392084166U;
long long int var_11 = 5377954332349510163LL;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 1405274218U;
long long int var_14 = 7809615426020107505LL;
_Bool var_15 = (_Bool)0;
int arr_3 [12] ;
_Bool arr_5 [23] [23] ;
long long int arr_6 [23] ;
unsigned char arr_7 [23] [23] ;
_Bool arr_8 [23] ;
signed char arr_9 [23] [23] ;
long long int arr_4 [12] [12] ;
int arr_10 [23] ;
_Bool arr_11 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = -84498258;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 6677418910805954390LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)-30;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 2664060418156783053LL : -1879101749434444818LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = -1144918323;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
