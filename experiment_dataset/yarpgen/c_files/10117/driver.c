#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1070306968U;
int var_1 = 335079915;
unsigned int var_2 = 1536279614U;
signed char var_3 = (signed char)5;
short var_4 = (short)-29797;
unsigned char var_5 = (unsigned char)50;
unsigned char var_6 = (unsigned char)13;
signed char var_7 = (signed char)-112;
signed char var_8 = (signed char)-15;
int var_9 = -1447154408;
unsigned long long int var_10 = 6582423620243253145ULL;
signed char var_11 = (signed char)71;
int var_12 = 268849748;
int zero = 0;
long long int var_13 = 7420164172240866023LL;
unsigned char var_14 = (unsigned char)202;
unsigned long long int arr_0 [21] ;
signed char arr_1 [21] ;
signed char arr_2 [21] ;
unsigned char arr_3 [21] ;
_Bool arr_4 [21] [21] [21] ;
signed char arr_5 [21] [21] ;
signed char arr_6 [21] [21] [21] ;
unsigned char arr_7 [21] [21] [21] ;
long long int arr_8 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 5724711428716764576ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (signed char)-103;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)107;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)88;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)205;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -8430709789122660924LL : 8585724267223985018LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
