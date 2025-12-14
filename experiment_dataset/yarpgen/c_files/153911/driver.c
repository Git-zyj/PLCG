#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-24390;
_Bool var_11 = (_Bool)1;
_Bool var_13 = (_Bool)1;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-82;
int zero = 0;
signed char var_19 = (signed char)105;
unsigned char var_20 = (unsigned char)231;
signed char var_21 = (signed char)-94;
short var_22 = (short)4287;
short var_23 = (short)-25676;
_Bool var_24 = (_Bool)0;
_Bool arr_1 [18] [18] ;
short arr_2 [18] [18] ;
_Bool arr_3 [18] ;
_Bool arr_4 [18] [18] [18] ;
short arr_6 [18] [18] ;
short arr_8 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (short)6936;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)2338 : (short)31158;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (short)31184;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
