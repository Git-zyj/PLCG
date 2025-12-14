#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4059595169U;
signed char var_1 = (signed char)13;
unsigned int var_3 = 936357118U;
unsigned int var_4 = 1747567755U;
short var_5 = (short)-29504;
unsigned int var_6 = 669058969U;
unsigned short var_7 = (unsigned short)4563;
short var_8 = (short)-18727;
unsigned short var_9 = (unsigned short)63320;
short var_10 = (short)-24594;
unsigned int var_11 = 1788045120U;
int zero = 0;
short var_12 = (short)-2975;
unsigned int var_13 = 1735184399U;
unsigned int var_14 = 2985015526U;
unsigned short var_15 = (unsigned short)14914;
short arr_0 [18] [18] ;
short arr_1 [18] ;
unsigned int arr_2 [18] [18] ;
unsigned short arr_3 [18] ;
unsigned int arr_4 [18] ;
unsigned char arr_6 [18] [18] [18] [18] ;
short arr_7 [18] ;
unsigned char arr_8 [18] [18] ;
short arr_10 [18] [18] ;
unsigned int arr_11 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (short)3817;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)13795 : (short)-24771;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 4280342134U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)23849 : (unsigned short)6661;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 2166050081U : 89574677U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)65 : (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (short)22234;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)186 : (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)19439 : (short)22049;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 2423421097U : 2395788793U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
