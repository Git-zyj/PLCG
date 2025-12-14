#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)4098;
unsigned long long int var_6 = 10939609975553768916ULL;
signed char var_8 = (signed char)-88;
signed char var_9 = (signed char)-82;
int zero = 0;
signed char var_12 = (signed char)122;
unsigned long long int var_13 = 16459492609640548086ULL;
unsigned long long int var_14 = 12406263904700919208ULL;
signed char var_15 = (signed char)-69;
unsigned short var_16 = (unsigned short)35043;
unsigned char var_17 = (unsigned char)23;
unsigned char var_18 = (unsigned char)129;
unsigned short arr_0 [20] [20] ;
signed char arr_1 [20] ;
unsigned char arr_2 [20] ;
unsigned short arr_3 [20] ;
unsigned char arr_4 [20] [20] ;
unsigned short arr_8 [13] ;
unsigned char arr_9 [13] ;
unsigned long long int arr_10 [13] ;
signed char arr_11 [13] ;
unsigned short arr_14 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)8820;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (signed char)-41;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned short)47063;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)46;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (unsigned short)20829;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = 4639395045727922745ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (signed char)-81;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = (unsigned short)53480;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
