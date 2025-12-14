#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -1897483872;
long long int var_2 = -5262879137245948220LL;
unsigned short var_3 = (unsigned short)18539;
unsigned int var_6 = 711133557U;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)252;
unsigned short var_9 = (unsigned short)64518;
unsigned int var_10 = 2121594857U;
signed char var_12 = (signed char)-33;
unsigned char var_13 = (unsigned char)232;
unsigned char var_14 = (unsigned char)196;
unsigned short var_15 = (unsigned short)12618;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 7883757873654836622ULL;
unsigned long long int var_18 = 5854523459547289838ULL;
unsigned short var_19 = (unsigned short)38053;
signed char var_20 = (signed char)-44;
_Bool var_21 = (_Bool)0;
int var_22 = -1676072522;
signed char var_23 = (signed char)-81;
unsigned short var_24 = (unsigned short)46732;
unsigned int var_25 = 296981237U;
unsigned int var_26 = 1266026077U;
unsigned char var_27 = (unsigned char)111;
int var_28 = 1364469337;
unsigned short var_29 = (unsigned short)35706;
short var_30 = (short)16196;
unsigned int var_31 = 1969499900U;
_Bool var_32 = (_Bool)1;
unsigned int var_33 = 2637504095U;
int var_34 = 513062526;
unsigned int var_35 = 1262389009U;
unsigned int arr_0 [21] ;
unsigned long long int arr_1 [21] [21] ;
signed char arr_2 [21] ;
_Bool arr_3 [21] [21] [21] ;
unsigned int arr_4 [21] [21] [21] ;
signed char arr_6 [21] [21] [21] ;
unsigned long long int arr_7 [21] [21] [21] ;
unsigned int arr_8 [21] ;
unsigned short arr_13 [21] ;
unsigned int arr_14 [21] [21] ;
unsigned int arr_16 [21] [21] [21] ;
int arr_22 [21] [21] [21] [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 2827314552U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 8961369549700787215ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (signed char)-2;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 3799316875U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)4;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 15756576377711775455ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = 3875296007U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (unsigned short)2425;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_14 [i_0] [i_1] = 2222759293U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 3808556064U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 21; ++i_6) 
                                arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -1784744098;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
