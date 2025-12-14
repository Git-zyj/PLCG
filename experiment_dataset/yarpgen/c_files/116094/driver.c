#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4746;
signed char var_1 = (signed char)110;
unsigned short var_3 = (unsigned short)63759;
unsigned short var_4 = (unsigned short)45934;
signed char var_6 = (signed char)-113;
unsigned short var_7 = (unsigned short)48301;
unsigned char var_8 = (unsigned char)24;
signed char var_9 = (signed char)-42;
short var_11 = (short)22811;
int zero = 0;
long long int var_12 = -6100633270398449929LL;
signed char var_13 = (signed char)83;
signed char var_14 = (signed char)105;
int var_15 = 1484215808;
short var_16 = (short)2088;
signed char arr_0 [14] [14] ;
unsigned char arr_4 [14] ;
unsigned short arr_5 [14] [14] [14] ;
long long int arr_6 [14] [14] [14] ;
long long int arr_7 [14] ;
long long int arr_8 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)100;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned char)212;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)44866;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -1132822297211534040LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = -326495926778590126LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 4712496960994163656LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
