#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-102;
unsigned int var_3 = 2155438614U;
short var_4 = (short)-31222;
signed char var_12 = (signed char)120;
unsigned long long int var_13 = 5051056619693349754ULL;
short var_14 = (short)30870;
unsigned int var_15 = 3365884100U;
int zero = 0;
short var_16 = (short)3284;
unsigned long long int var_17 = 2976337695096911006ULL;
short var_18 = (short)-1697;
unsigned int var_19 = 219382982U;
signed char var_20 = (signed char)63;
unsigned short var_21 = (unsigned short)59261;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)0;
unsigned int arr_0 [15] ;
short arr_1 [15] ;
unsigned short arr_6 [22] ;
unsigned int arr_7 [22] ;
short arr_9 [24] ;
unsigned long long int arr_10 [24] [24] ;
unsigned short arr_5 [15] ;
signed char arr_8 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 3766063834U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)-8507;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (unsigned short)55252;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = 3216930607U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)15935 : (short)-18464;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = 1629058090088544070ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)15201 : (unsigned short)60188;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)-59 : (signed char)-83;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
