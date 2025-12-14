#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_4 = 1778867650;
unsigned char var_6 = (unsigned char)113;
long long int var_9 = -1276780179471547707LL;
unsigned char var_17 = (unsigned char)174;
unsigned char var_18 = (unsigned char)199;
int zero = 0;
int var_19 = -365337658;
short var_20 = (short)-25153;
int var_21 = 1570489741;
unsigned char var_22 = (unsigned char)51;
short var_23 = (short)-19493;
unsigned short var_24 = (unsigned short)13503;
unsigned long long int var_25 = 7037455562490486000ULL;
int var_26 = -742919945;
unsigned long long int var_27 = 16077741086744228645ULL;
unsigned short arr_0 [21] ;
signed char arr_2 [21] ;
unsigned short arr_8 [24] ;
unsigned long long int arr_10 [24] ;
unsigned char arr_11 [24] [24] ;
int arr_12 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned short)53558;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (signed char)84;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (unsigned short)47197;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = 14950784737238500171ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = -1882228081;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
