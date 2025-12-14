#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 221905963U;
unsigned long long int var_1 = 5648381617283572909ULL;
unsigned short var_4 = (unsigned short)63389;
signed char var_5 = (signed char)95;
long long int var_7 = 4933842654554905383LL;
unsigned long long int var_11 = 3006955970011132051ULL;
unsigned short var_13 = (unsigned short)36883;
unsigned short var_17 = (unsigned short)55687;
signed char var_18 = (signed char)122;
int zero = 0;
signed char var_19 = (signed char)-81;
int var_20 = 784720643;
short var_21 = (short)-27846;
short var_22 = (short)26585;
unsigned int var_23 = 77471481U;
unsigned char var_24 = (unsigned char)68;
unsigned long long int var_25 = 4284561487868682122ULL;
unsigned long long int var_26 = 5142998213410530493ULL;
signed char var_27 = (signed char)-111;
_Bool var_28 = (_Bool)1;
_Bool arr_1 [24] [24] ;
unsigned char arr_2 [24] [24] [24] ;
unsigned int arr_4 [24] [24] [24] ;
unsigned char arr_9 [12] [12] [12] ;
unsigned int arr_13 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 213488743U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)111;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_13 [i_0] [i_1] = 213289693U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
