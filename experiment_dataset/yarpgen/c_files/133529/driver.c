#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-31134;
unsigned char var_9 = (unsigned char)77;
unsigned short var_10 = (unsigned short)728;
unsigned long long int var_12 = 5025871165869957628ULL;
unsigned char var_13 = (unsigned char)25;
int zero = 0;
long long int var_16 = -1076136355176548080LL;
signed char var_17 = (signed char)98;
long long int var_18 = 4558853736781948004LL;
short var_19 = (short)27807;
unsigned char var_20 = (unsigned char)207;
unsigned short var_21 = (unsigned short)33350;
long long int var_22 = -6162383562028392422LL;
_Bool var_23 = (_Bool)0;
short var_24 = (short)18122;
unsigned long long int var_25 = 4870573202815848813ULL;
short var_26 = (short)-21173;
unsigned short arr_0 [10] ;
unsigned long long int arr_2 [10] [10] ;
unsigned long long int arr_3 [23] ;
unsigned long long int arr_4 [23] [23] ;
short arr_5 [23] ;
int arr_8 [20] ;
long long int arr_9 [20] ;
unsigned long long int arr_6 [23] [23] ;
_Bool arr_10 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)44807;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 17846107985190158486ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 4544694395148576816ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 16472776371573052908ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (short)-7357;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = 314831519;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = 9155289602714946316LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = 2097388486752790636ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
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
