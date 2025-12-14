#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)77;
int var_2 = 1868498904;
signed char var_3 = (signed char)-76;
short var_4 = (short)-23725;
short var_9 = (short)-31232;
_Bool var_11 = (_Bool)1;
unsigned char var_14 = (unsigned char)24;
short var_16 = (short)14437;
int zero = 0;
unsigned int var_17 = 1352074755U;
unsigned int var_18 = 40586894U;
short var_19 = (short)25393;
unsigned int var_20 = 3606461065U;
signed char var_21 = (signed char)-13;
short var_22 = (short)5060;
unsigned short var_23 = (unsigned short)30646;
unsigned short var_24 = (unsigned short)42738;
signed char var_25 = (signed char)-83;
int arr_0 [17] [17] ;
int arr_1 [17] ;
signed char arr_3 [17] ;
unsigned int arr_5 [17] [17] [17] ;
short arr_6 [17] ;
short arr_4 [17] ;
unsigned char arr_11 [17] ;
unsigned short arr_12 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 609772916;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 394712848;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (signed char)-4;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1802116987U : 3872009274U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (short)854;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (short)-8136;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned char)15 : (unsigned char)248;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)13891 : (unsigned short)34180;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
