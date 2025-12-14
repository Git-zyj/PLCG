#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1017323515;
unsigned int var_1 = 3129339023U;
unsigned short var_2 = (unsigned short)30429;
unsigned int var_3 = 1642479303U;
int var_4 = 1195289239;
unsigned char var_7 = (unsigned char)189;
unsigned long long int var_8 = 9131065634323968345ULL;
int var_9 = -1540591781;
unsigned long long int var_11 = 12253319324105629515ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)54231;
int var_13 = 1396530576;
unsigned long long int var_14 = 10497368827938251216ULL;
unsigned int var_15 = 1496390444U;
signed char var_16 = (signed char)57;
unsigned int var_17 = 3604644338U;
unsigned int var_18 = 3129321265U;
long long int var_19 = 2883392378621034073LL;
unsigned short var_20 = (unsigned short)2008;
unsigned char var_21 = (unsigned char)15;
short var_22 = (short)-28967;
unsigned int arr_0 [11] ;
long long int arr_1 [11] ;
int arr_4 [11] [11] [11] ;
signed char arr_5 [11] [11] ;
signed char arr_7 [11] [11] [11] ;
unsigned int arr_10 [11] [11] [11] [11] ;
short arr_13 [11] [11] [11] [11] [11] ;
unsigned int arr_18 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 119772064U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 2537877246106315683LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 947793330;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)86;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)87;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 2728908963U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)13444;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 4039884511U : 1008740982U;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
