#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4536237278484419771LL;
_Bool var_2 = (_Bool)0;
long long int var_6 = 6709379398286397048LL;
unsigned short var_7 = (unsigned short)26111;
signed char var_10 = (signed char)-10;
short var_11 = (short)-7086;
unsigned char var_12 = (unsigned char)146;
short var_13 = (short)1089;
int zero = 0;
unsigned char var_14 = (unsigned char)145;
unsigned int var_15 = 951061976U;
short var_16 = (short)18974;
unsigned short var_17 = (unsigned short)63629;
_Bool var_18 = (_Bool)1;
_Bool arr_0 [10] ;
_Bool arr_1 [10] [10] ;
unsigned short arr_4 [17] [17] ;
unsigned short arr_6 [17] [17] ;
unsigned short arr_7 [17] [17] ;
unsigned short arr_11 [10] [10] ;
unsigned short arr_12 [10] ;
int arr_13 [10] ;
short arr_2 [10] [10] ;
unsigned long long int arr_3 [10] [10] ;
short arr_8 [17] [17] ;
short arr_9 [17] ;
int arr_14 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)54333;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)34774;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)48753;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)5714;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (unsigned short)12824;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = -1579089714;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-16907 : (short)10957;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 10079565120040921256ULL : 7304800875121383263ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-6844;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (short)6621;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = -1076549089;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
