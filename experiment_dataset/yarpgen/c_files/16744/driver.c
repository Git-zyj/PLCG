#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10783624840375780237ULL;
signed char var_7 = (signed char)87;
unsigned int var_8 = 1415567253U;
unsigned char var_11 = (unsigned char)27;
signed char var_12 = (signed char)-21;
int zero = 0;
signed char var_14 = (signed char)-75;
unsigned short var_15 = (unsigned short)55858;
signed char var_16 = (signed char)74;
short var_17 = (short)19590;
unsigned char var_18 = (unsigned char)248;
unsigned char var_19 = (unsigned char)209;
unsigned short var_20 = (unsigned short)28579;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)1736;
short var_23 = (short)26939;
unsigned short var_24 = (unsigned short)63900;
short var_25 = (short)-17010;
unsigned int var_26 = 2072514665U;
signed char var_27 = (signed char)-52;
unsigned short var_28 = (unsigned short)61620;
unsigned short var_29 = (unsigned short)44995;
unsigned short arr_0 [24] ;
unsigned int arr_1 [24] ;
signed char arr_2 [24] [24] [24] ;
signed char arr_3 [24] [24] [24] ;
unsigned short arr_6 [24] [24] [24] ;
unsigned char arr_7 [24] [24] [24] ;
int arr_8 [24] ;
short arr_10 [24] [24] [24] ;
_Bool arr_14 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)32082;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 854838715U : 2912002055U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)-127;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)-16;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)8561;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = -1198499100;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (short)-12088;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (_Bool)1;
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
