#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-60;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)38051;
_Bool var_4 = (_Bool)1;
int var_5 = 84795445;
int var_7 = -1849592548;
unsigned int var_8 = 174548581U;
long long int var_9 = 6991091927334784185LL;
unsigned short var_10 = (unsigned short)36296;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)-23;
short var_15 = (short)25476;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)127;
unsigned long long int var_19 = 9352362642801443296ULL;
signed char var_20 = (signed char)77;
signed char var_21 = (signed char)47;
unsigned char var_22 = (unsigned char)134;
unsigned long long int var_23 = 17502051557012088276ULL;
_Bool arr_0 [18] [18] ;
unsigned long long int arr_1 [18] ;
int arr_4 [18] ;
signed char arr_5 [18] [18] ;
signed char arr_2 [18] ;
signed char arr_3 [18] [18] ;
_Bool arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 1729097914728910508ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = -1549728717;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-43;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (signed char)30;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)116;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
