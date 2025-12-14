#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_2 = (unsigned short)38499;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)212;
_Bool var_8 = (_Bool)1;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-19;
int zero = 0;
int var_15 = 462570263;
unsigned short var_16 = (unsigned short)46775;
long long int var_17 = -5186703205399322221LL;
unsigned short var_18 = (unsigned short)14410;
unsigned short var_19 = (unsigned short)36524;
short var_20 = (short)-32067;
signed char arr_0 [12] ;
unsigned long long int arr_3 [13] [13] ;
signed char arr_6 [19] [19] ;
_Bool arr_7 [19] ;
long long int arr_2 [12] [12] ;
signed char arr_8 [19] ;
unsigned short arr_9 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)70 : (signed char)17;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = 3250221410353716974ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-67;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? -314093683211979282LL : -2853482997604532878LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (unsigned short)50892;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
