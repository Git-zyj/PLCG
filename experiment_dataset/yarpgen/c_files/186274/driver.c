#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16138164061730516292ULL;
signed char var_4 = (signed char)-90;
int var_7 = -935108065;
unsigned short var_8 = (unsigned short)41834;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_12 = 2022921783;
long long int var_13 = -8952655802617330619LL;
short var_14 = (short)-22352;
int var_15 = 1085087645;
long long int var_16 = 5523746404693056703LL;
long long int var_17 = 8594276359290835395LL;
short var_18 = (short)-681;
long long int var_19 = -4820126800922325791LL;
short arr_0 [18] ;
_Bool arr_1 [18] ;
short arr_2 [23] ;
unsigned long long int arr_3 [23] [23] ;
unsigned short arr_4 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)20051;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)12689 : (short)16823;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 4888343629785160974ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)40963;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
