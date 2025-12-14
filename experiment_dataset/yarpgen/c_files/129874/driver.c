#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)34210;
unsigned int var_2 = 3425643516U;
unsigned int var_3 = 1120754768U;
unsigned short var_5 = (unsigned short)11100;
unsigned char var_6 = (unsigned char)169;
unsigned short var_8 = (unsigned short)56558;
unsigned int var_9 = 906963966U;
unsigned short var_13 = (unsigned short)10905;
int zero = 0;
short var_16 = (short)-1306;
short var_17 = (short)24040;
unsigned int var_18 = 3208583542U;
unsigned short var_19 = (unsigned short)55154;
unsigned short var_20 = (unsigned short)7980;
short var_21 = (short)-21234;
short var_22 = (short)-9400;
unsigned int var_23 = 1966628351U;
unsigned char var_24 = (unsigned char)204;
short var_25 = (short)27672;
short var_26 = (short)23246;
short var_27 = (short)30462;
short arr_10 [18] ;
unsigned short arr_11 [18] [18] ;
unsigned int arr_15 [12] [12] ;
unsigned char arr_16 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (short)12930 : (short)-31838;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)40273 : (unsigned short)46613;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_15 [i_0] [i_1] = 3326508153U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = (unsigned char)54;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
