#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1813948056U;
unsigned char var_1 = (unsigned char)88;
signed char var_3 = (signed char)-51;
unsigned int var_4 = 1121973398U;
unsigned short var_6 = (unsigned short)30036;
short var_7 = (short)24495;
int var_8 = -1002554265;
unsigned int var_9 = 3696113850U;
unsigned long long int var_11 = 16966743669244572891ULL;
unsigned char var_12 = (unsigned char)11;
unsigned char var_13 = (unsigned char)198;
int zero = 0;
unsigned long long int var_14 = 12433455714942267633ULL;
unsigned short var_15 = (unsigned short)21707;
unsigned int var_16 = 78973470U;
signed char var_17 = (signed char)26;
signed char arr_0 [10] ;
unsigned short arr_1 [10] ;
unsigned short arr_2 [10] [10] [10] ;
int arr_4 [10] [10] ;
unsigned char arr_5 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (signed char)21;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)43772;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)63251;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = -1117587320;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)193;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
