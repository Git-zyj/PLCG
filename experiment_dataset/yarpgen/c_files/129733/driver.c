#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)26530;
unsigned int var_9 = 3617297185U;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 211442288U;
short var_17 = (short)-15669;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 4578898044547842132ULL;
short var_20 = (short)24165;
short var_21 = (short)4686;
short var_22 = (short)2365;
_Bool var_23 = (_Bool)0;
_Bool var_24 = (_Bool)0;
short var_25 = (short)17972;
long long int var_26 = 791989933341349540LL;
unsigned int var_27 = 3489722533U;
signed char var_28 = (signed char)-52;
unsigned int arr_0 [12] ;
unsigned short arr_1 [12] [12] ;
unsigned long long int arr_2 [12] [12] ;
short arr_4 [12] [12] ;
unsigned int arr_10 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 326595855U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)19097 : (unsigned short)45165;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 5810552863118357950ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (short)6024;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = 3874930087U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
