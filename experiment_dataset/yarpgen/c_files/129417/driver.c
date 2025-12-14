#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-7861;
unsigned short var_6 = (unsigned short)57056;
unsigned char var_7 = (unsigned char)57;
unsigned char var_9 = (unsigned char)118;
unsigned int var_11 = 4065081804U;
unsigned short var_13 = (unsigned short)4337;
unsigned short var_16 = (unsigned short)55255;
unsigned short var_17 = (unsigned short)28733;
int zero = 0;
unsigned short var_18 = (unsigned short)38803;
signed char var_19 = (signed char)11;
int var_20 = 1607462289;
signed char var_21 = (signed char)-83;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)53827;
long long int arr_2 [23] ;
long long int arr_3 [23] ;
unsigned short arr_6 [16] [16] ;
unsigned int arr_4 [23] [23] ;
signed char arr_5 [23] ;
unsigned int arr_8 [16] ;
unsigned short arr_9 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = -5562443034745340970LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 1096702644025259241LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)50218;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 1631062657U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (signed char)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = 947643156U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (unsigned short)50997;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
