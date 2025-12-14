#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25725;
_Bool var_1 = (_Bool)0;
short var_2 = (short)-29529;
unsigned short var_3 = (unsigned short)13036;
unsigned long long int var_4 = 7081363723226629364ULL;
unsigned short var_5 = (unsigned short)12463;
unsigned short var_7 = (unsigned short)36883;
unsigned short var_8 = (unsigned short)55858;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_10 = 869670684729403364ULL;
unsigned short var_11 = (unsigned short)54500;
unsigned short var_12 = (unsigned short)8287;
unsigned short var_13 = (unsigned short)62049;
short var_14 = (short)7926;
short var_15 = (short)5490;
short var_16 = (short)-26875;
unsigned short arr_1 [11] [11] ;
signed char arr_2 [11] ;
_Bool arr_3 [11] ;
short arr_4 [11] ;
unsigned short arr_7 [21] [21] ;
unsigned short arr_8 [21] [21] ;
unsigned short arr_5 [11] ;
signed char arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)57128;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (signed char)-58;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (short)-730;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)36813;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)49035;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)24273 : (unsigned short)53897;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)57 : (signed char)-79;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
