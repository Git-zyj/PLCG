#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)36;
long long int var_2 = 5940578087672214326LL;
short var_4 = (short)22548;
int var_5 = -2128050229;
signed char var_6 = (signed char)113;
signed char var_7 = (signed char)-31;
unsigned long long int var_8 = 17009894572374715552ULL;
unsigned short var_11 = (unsigned short)4284;
int zero = 0;
unsigned long long int var_12 = 11873148701219751354ULL;
short var_13 = (short)5919;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
signed char arr_1 [23] ;
short arr_2 [23] ;
int arr_5 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)-121;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)18249 : (short)-5831;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = 1746700919;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
