#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11006;
long long int var_1 = -1122816999965377869LL;
unsigned short var_2 = (unsigned short)18163;
unsigned char var_3 = (unsigned char)100;
short var_8 = (short)14208;
unsigned int var_9 = 1885131646U;
_Bool var_11 = (_Bool)1;
long long int var_13 = -5606282033970271247LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = -2328176613173080978LL;
unsigned int var_16 = 4033379125U;
unsigned short var_17 = (unsigned short)4987;
short var_18 = (short)6933;
int var_19 = -1358105361;
unsigned long long int var_20 = 12210653517140776806ULL;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 4150576332U;
short arr_1 [16] ;
unsigned int arr_2 [16] [16] ;
short arr_3 [16] [16] [16] ;
_Bool arr_4 [16] ;
unsigned int arr_7 [16] [16] [16] [16] ;
unsigned long long int arr_9 [16] ;
_Bool arr_10 [16] [16] [16] [16] ;
short arr_13 [22] [22] ;
unsigned short arr_15 [22] [22] ;
unsigned long long int arr_16 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)-26232;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 89559241U : 219241708U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)1821;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 469171589U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = 8703703013343399103ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-7802 : (short)13592;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)47000 : (unsigned short)25856;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 15375360648780618237ULL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
