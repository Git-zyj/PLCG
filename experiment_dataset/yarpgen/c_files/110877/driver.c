#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)96;
int var_2 = 1061119999;
int var_3 = 215991476;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-64;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-17;
unsigned long long int var_11 = 11057466636945122510ULL;
unsigned char var_12 = (unsigned char)211;
int zero = 0;
int var_13 = -621448827;
short var_14 = (short)21376;
unsigned short var_15 = (unsigned short)55356;
unsigned int var_16 = 2234127666U;
signed char var_17 = (signed char)0;
signed char var_18 = (signed char)75;
unsigned long long int var_19 = 7196533797446618813ULL;
short var_20 = (short)-12603;
long long int arr_1 [12] [12] ;
_Bool arr_2 [23] [23] ;
long long int arr_4 [23] ;
signed char arr_5 [23] ;
signed char arr_9 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = -1843300421473880783LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 7552355545254826091LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (signed char)-93;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (signed char)118;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
