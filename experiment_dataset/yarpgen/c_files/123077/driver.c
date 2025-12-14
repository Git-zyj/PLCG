#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1468848957U;
unsigned short var_1 = (unsigned short)64003;
unsigned long long int var_3 = 14819308936029650912ULL;
signed char var_5 = (signed char)-43;
_Bool var_9 = (_Bool)1;
unsigned short var_11 = (unsigned short)26003;
unsigned short var_15 = (unsigned short)65329;
unsigned short var_17 = (unsigned short)24260;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)37317;
unsigned long long int var_20 = 930890727849975376ULL;
unsigned int var_21 = 2936976348U;
unsigned long long int var_22 = 18095654470348096685ULL;
unsigned short var_23 = (unsigned short)38351;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)1;
unsigned int var_26 = 499261464U;
_Bool arr_0 [22] [22] ;
unsigned short arr_1 [22] ;
_Bool arr_4 [18] ;
_Bool arr_5 [24] ;
signed char arr_6 [24] ;
_Bool arr_2 [22] ;
_Bool arr_7 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)53823;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (signed char)-98;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
