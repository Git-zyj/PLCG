#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)110;
unsigned short var_1 = (unsigned short)43583;
signed char var_2 = (signed char)-35;
unsigned short var_3 = (unsigned short)26773;
unsigned short var_4 = (unsigned short)57231;
unsigned long long int var_5 = 3625790760010394862ULL;
unsigned int var_6 = 3407379271U;
unsigned short var_7 = (unsigned short)35624;
int var_8 = -821294239;
unsigned int var_9 = 3382671750U;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_12 = 1044954613;
short var_13 = (short)531;
unsigned short var_14 = (unsigned short)7991;
signed char var_15 = (signed char)98;
unsigned int var_16 = 1408568344U;
unsigned short var_17 = (unsigned short)12586;
int var_18 = -2060732111;
int var_19 = 1220026875;
unsigned int var_20 = 2504357954U;
unsigned long long int var_21 = 15545747146758786383ULL;
signed char var_22 = (signed char)46;
unsigned short var_23 = (unsigned short)38904;
unsigned int arr_0 [23] ;
unsigned int arr_1 [23] [23] ;
unsigned char arr_4 [23] [23] ;
unsigned int arr_5 [23] [23] ;
int arr_6 [23] ;
unsigned short arr_7 [23] ;
unsigned int arr_10 [23] ;
signed char arr_14 [23] [23] [23] ;
short arr_2 [23] ;
short arr_3 [23] ;
signed char arr_9 [23] [23] ;
int arr_18 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 4086325094U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 847058861U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)190;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = 3890644600U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = -1786634109;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (unsigned short)6245;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = 3794718718U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (signed char)70;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)21612;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (short)-10356;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)113;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = 665063488;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
