#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)27920;
unsigned long long int var_3 = 10502590685697273226ULL;
long long int var_5 = 6147380032361172905LL;
long long int var_7 = -5802724880458363741LL;
long long int var_8 = -5272381980649913370LL;
signed char var_9 = (signed char)-21;
signed char var_10 = (signed char)-29;
int zero = 0;
long long int var_11 = 8103352112000180265LL;
unsigned long long int var_12 = 4937047437205330954ULL;
unsigned long long int var_13 = 5635624762130617233ULL;
unsigned long long int var_14 = 3734438016027565815ULL;
signed char var_15 = (signed char)-59;
long long int var_16 = -5601882502386698141LL;
long long int arr_0 [23] [23] ;
unsigned long long int arr_1 [23] ;
long long int arr_2 [23] [23] ;
unsigned int arr_7 [24] ;
short arr_9 [24] [24] ;
int arr_10 [24] ;
unsigned long long int arr_5 [23] [23] ;
_Bool arr_6 [23] ;
short arr_11 [24] ;
unsigned long long int arr_12 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = -9050680109776421945LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 7243904054258203612ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = -4196587043093681092LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 2638256074U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-17793;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = -1469820107;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = 879904444736709686ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (short)24954;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_12 [i_0] [i_1] = 10015957693421355239ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
