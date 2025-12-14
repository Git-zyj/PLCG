#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29211;
long long int var_2 = 8273200742360607430LL;
_Bool var_8 = (_Bool)1;
short var_14 = (short)28710;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)185;
unsigned int var_21 = 3168626606U;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)142;
unsigned char var_24 = (unsigned char)194;
short arr_0 [19] ;
short arr_1 [19] ;
_Bool arr_2 [19] ;
unsigned long long int arr_7 [13] ;
unsigned char arr_11 [16] ;
unsigned int arr_12 [16] ;
unsigned short arr_13 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)-4683 : (short)5195;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (short)10954;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = 4384067555502369982ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = 1170825349U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = (unsigned short)49035;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
