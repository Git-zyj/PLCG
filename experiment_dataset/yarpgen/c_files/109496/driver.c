#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)204;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 1510099986U;
signed char var_3 = (signed char)-123;
short var_5 = (short)-19051;
signed char var_8 = (signed char)15;
short var_13 = (short)-8307;
short var_14 = (short)-13270;
int zero = 0;
signed char var_15 = (signed char)41;
int var_16 = 36562825;
short var_17 = (short)17244;
signed char var_18 = (signed char)117;
unsigned int var_19 = 2659287783U;
short arr_0 [25] ;
unsigned short arr_1 [25] ;
_Bool arr_2 [25] ;
int arr_3 [25] [25] ;
unsigned long long int arr_4 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)-16081;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)17367 : (unsigned short)52369;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 629033474 : 1115111617;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 373889650962028591ULL : 3193649878524233102ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
