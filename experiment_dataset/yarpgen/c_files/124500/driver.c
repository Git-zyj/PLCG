#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 299330089;
unsigned long long int var_6 = 12064911405472642863ULL;
int var_12 = 1377878790;
int var_16 = -419145926;
int zero = 0;
unsigned char var_19 = (unsigned char)188;
unsigned char var_20 = (unsigned char)106;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)167;
int var_23 = -64877338;
unsigned long long int var_24 = 10274175521574263089ULL;
unsigned char arr_0 [24] [24] ;
_Bool arr_1 [24] [24] ;
int arr_2 [24] ;
short arr_3 [24] ;
unsigned char arr_4 [24] ;
signed char arr_5 [24] [24] ;
signed char arr_8 [24] ;
unsigned short arr_9 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = -1350896628;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (short)4076;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)55;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (signed char)-95;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (unsigned short)16229;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
