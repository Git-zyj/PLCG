#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1631835212;
signed char var_2 = (signed char)-29;
unsigned int var_4 = 2342570463U;
signed char var_5 = (signed char)30;
signed char var_7 = (signed char)-36;
unsigned int var_8 = 924013512U;
unsigned int var_9 = 492089852U;
unsigned int var_10 = 101723046U;
unsigned int var_11 = 2289724245U;
int zero = 0;
int var_13 = -95407006;
unsigned int var_14 = 575196462U;
signed char var_15 = (signed char)85;
signed char var_16 = (signed char)-67;
signed char var_17 = (signed char)8;
unsigned int var_18 = 451250712U;
unsigned int var_19 = 700807865U;
unsigned int arr_0 [17] ;
signed char arr_1 [17] [17] ;
unsigned int arr_7 [22] [22] ;
int arr_2 [17] [17] ;
signed char arr_10 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 1744610875U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = 2406573569U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = -465766806;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (signed char)100;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
