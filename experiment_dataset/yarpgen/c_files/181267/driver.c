#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1296952122;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
short var_5 = (short)-6667;
unsigned int var_6 = 1314464588U;
signed char var_7 = (signed char)-97;
unsigned char var_13 = (unsigned char)73;
int var_14 = -776190413;
int var_15 = 782900545;
int var_17 = 678247521;
int zero = 0;
unsigned long long int var_19 = 16515504080014369782ULL;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)46;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)1;
_Bool arr_3 [10] [10] [10] ;
unsigned long long int arr_4 [18] ;
_Bool arr_5 [18] ;
unsigned char arr_7 [18] [18] [18] ;
int arr_8 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 4974745368713107533ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = 2113979595;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
