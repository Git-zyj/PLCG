#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2469114251U;
unsigned long long int var_2 = 1331924518836564650ULL;
unsigned long long int var_3 = 9458509825175819393ULL;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 4260016562U;
unsigned long long int var_6 = 5027476060457948035ULL;
short var_7 = (short)-20443;
unsigned int var_8 = 3140027404U;
unsigned int var_9 = 1459758651U;
short var_10 = (short)3726;
unsigned char var_11 = (unsigned char)241;
unsigned long long int var_13 = 12861473737461049463ULL;
unsigned long long int var_14 = 15181153553711644429ULL;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-20571;
unsigned int var_18 = 454566281U;
int zero = 0;
unsigned long long int var_20 = 3252524353496205842ULL;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)93;
unsigned int var_23 = 1605015381U;
short arr_0 [22] [22] ;
_Bool arr_4 [22] [22] [22] ;
signed char arr_9 [22] [22] [22] [22] [22] ;
unsigned char arr_12 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-9452 : (short)17604;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-97;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)54 : (unsigned char)75;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
