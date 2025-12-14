#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-16;
signed char var_4 = (signed char)58;
unsigned int var_7 = 615288364U;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)126;
unsigned char var_11 = (unsigned char)35;
signed char var_12 = (signed char)-7;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)111;
signed char var_16 = (signed char)18;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
_Bool arr_2 [18] ;
unsigned char arr_3 [18] [18] [18] ;
signed char arr_4 [18] ;
_Bool arr_5 [18] ;
unsigned int arr_7 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (signed char)95;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1254316714U : 2595655073U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
