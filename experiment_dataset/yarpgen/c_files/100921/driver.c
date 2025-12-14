#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34832;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-58;
long long int var_6 = 4373534944799559331LL;
unsigned char var_7 = (unsigned char)193;
unsigned char var_9 = (unsigned char)73;
int var_10 = 1148835368;
signed char var_11 = (signed char)-113;
int zero = 0;
signed char var_13 = (signed char)19;
unsigned long long int var_14 = 13869837578219467497ULL;
signed char var_15 = (signed char)23;
int var_16 = -238543105;
unsigned long long int var_17 = 3575394569369127756ULL;
int var_18 = -938756223;
unsigned long long int var_19 = 14299915922187697628ULL;
unsigned short var_20 = (unsigned short)32073;
unsigned long long int var_21 = 6819376763955582389ULL;
long long int var_22 = 578328966793687124LL;
_Bool var_23 = (_Bool)0;
unsigned long long int var_24 = 12451774339223744195ULL;
unsigned long long int var_25 = 4376850817737990677ULL;
unsigned short var_26 = (unsigned short)21271;
unsigned short var_27 = (unsigned short)55103;
short var_28 = (short)-25932;
short arr_0 [23] ;
short arr_1 [23] ;
short arr_2 [23] [23] ;
_Bool arr_5 [23] [23] ;
unsigned long long int arr_8 [23] [23] [23] ;
int arr_12 [23] [23] [23] ;
long long int arr_4 [23] ;
unsigned long long int arr_7 [23] [23] ;
int arr_22 [17] [17] [17] ;
unsigned short arr_38 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (short)22405;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (short)-2199;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-24826;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 7778513743879018153ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = -1512113141;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = -4984114854497808117LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = 11619701889851141618ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = 872607035;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_38 [i_0] = (unsigned short)46930;
}

void checksum() {
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_38 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
