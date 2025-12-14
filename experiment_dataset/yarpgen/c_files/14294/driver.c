#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7898931758844700425LL;
unsigned char var_1 = (unsigned char)135;
unsigned short var_3 = (unsigned short)22414;
unsigned int var_5 = 2907568380U;
unsigned int var_6 = 1508853298U;
unsigned long long int var_8 = 17776500116706044619ULL;
unsigned char var_9 = (unsigned char)238;
unsigned long long int var_10 = 11179599062778039862ULL;
int zero = 0;
_Bool var_11 = (_Bool)1;
long long int var_12 = 742718100744334142LL;
int var_13 = -1561430891;
unsigned long long int var_14 = 11659885064823190628ULL;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)31;
unsigned long long int var_17 = 7379580176943861175ULL;
long long int var_18 = 2156663558620683769LL;
unsigned long long int var_19 = 15941738934603226017ULL;
_Bool arr_0 [20] ;
unsigned long long int arr_1 [20] ;
unsigned long long int arr_2 [20] ;
unsigned long long int arr_5 [20] ;
unsigned long long int arr_6 [20] ;
unsigned long long int arr_7 [20] [20] [20] [20] ;
long long int arr_8 [20] [20] ;
unsigned short arr_9 [20] [20] [20] ;
unsigned int arr_10 [20] [20] [20] [20] ;
unsigned char arr_19 [17] ;
unsigned long long int arr_20 [17] [17] [17] ;
unsigned char arr_22 [17] [17] ;
int arr_25 [17] [17] ;
_Bool arr_26 [17] [17] [17] [17] ;
unsigned char arr_27 [17] ;
unsigned int arr_28 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 9059382187144889666ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 18157886541905808398ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 16587895726548632449ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 3252056099383346974ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 9016339084887793850ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? -7195579482508897856LL : 8189802283482125242LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned short)50386;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 1713612960U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 13120656549075980339ULL : 12617530148682965092ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_22 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)198 : (unsigned char)209;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_25 [i_0] [i_1] = (i_0 % 2 == 0) ? 1450407394 : 53765423;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? (unsigned char)40 : (unsigned char)239;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? 318856370U : 2274501149U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_28 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
