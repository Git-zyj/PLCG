#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-2;
long long int var_11 = 93270750239230098LL;
unsigned long long int var_12 = 15082931399713502126ULL;
int zero = 0;
unsigned int var_13 = 1707887838U;
unsigned long long int var_14 = 14891324895575186987ULL;
int arr_3 [14] [14] ;
short arr_4 [14] [14] ;
int arr_6 [18] ;
unsigned int arr_7 [18] ;
_Bool arr_8 [18] ;
unsigned int arr_9 [18] [18] ;
unsigned int arr_10 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 801592601;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-16726 : (short)-9351;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = -120723962;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1659730573U : 3719807381U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 4110916646U : 3733052009U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 806441050U : 1121316944U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
