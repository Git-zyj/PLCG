#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32914;
unsigned long long int var_1 = 2516278471130533808ULL;
unsigned char var_2 = (unsigned char)28;
short var_5 = (short)29575;
unsigned short var_6 = (unsigned short)434;
unsigned short var_8 = (unsigned short)43978;
unsigned long long int var_9 = 10740315490370743616ULL;
short var_10 = (short)8634;
short var_12 = (short)-29906;
short var_13 = (short)-5724;
signed char var_14 = (signed char)10;
int var_15 = -38961553;
int zero = 0;
signed char var_18 = (signed char)57;
short var_19 = (short)-1810;
int var_20 = -775777329;
unsigned char var_21 = (unsigned char)196;
unsigned int arr_0 [10] [10] ;
unsigned long long int arr_2 [10] ;
unsigned char arr_5 [10] [10] [10] ;
signed char arr_6 [10] [10] ;
unsigned short arr_7 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 2761160990U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 9552887647799102203ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)179;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-121;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)52259;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
