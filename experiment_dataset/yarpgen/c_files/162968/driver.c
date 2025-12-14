#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_3 = 2013444482435331284LL;
unsigned int var_4 = 1668143631U;
short var_5 = (short)23852;
unsigned int var_8 = 3131557390U;
short var_10 = (short)28975;
long long int var_11 = -19394517999261685LL;
unsigned long long int var_12 = 1812501519897781036ULL;
int var_13 = 1896383429;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 779764382U;
signed char var_16 = (signed char)-123;
short var_17 = (short)17173;
_Bool var_18 = (_Bool)0;
int var_19 = 1057399722;
_Bool var_20 = (_Bool)0;
int var_21 = -882107823;
short arr_0 [21] [21] ;
_Bool arr_1 [21] [21] ;
signed char arr_3 [20] ;
signed char arr_4 [20] ;
short arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-20218 : (short)21969;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (signed char)98;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (signed char)43;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)-7086 : (short)-16316;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
