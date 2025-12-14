#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2957060925U;
signed char var_1 = (signed char)101;
_Bool var_2 = (_Bool)0;
int var_3 = 2137286124;
unsigned int var_4 = 972988340U;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)17885;
unsigned char var_7 = (unsigned char)46;
int var_8 = -510145724;
unsigned char var_9 = (unsigned char)168;
int var_10 = 450323905;
short var_11 = (short)1731;
unsigned char var_12 = (unsigned char)15;
int zero = 0;
int var_13 = -824309442;
unsigned char var_14 = (unsigned char)125;
long long int var_15 = -7343140834853695265LL;
unsigned long long int var_16 = 7383856555820493908ULL;
unsigned long long int var_17 = 9344444942239719131ULL;
long long int var_18 = -4928373489652368069LL;
unsigned short arr_0 [24] ;
unsigned char arr_1 [24] ;
unsigned int arr_3 [13] [13] ;
_Bool arr_5 [13] [13] [13] ;
long long int arr_6 [13] [13] [13] [13] ;
unsigned long long int arr_8 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)55082 : (unsigned short)31147;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = 1478412793U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 88263537685583750LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 11612475778027612125ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
