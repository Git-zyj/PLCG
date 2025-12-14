#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 330963424U;
signed char var_1 = (signed char)-25;
signed char var_2 = (signed char)-125;
unsigned char var_4 = (unsigned char)175;
unsigned long long int var_6 = 2963206934692026256ULL;
unsigned char var_9 = (unsigned char)216;
signed char var_10 = (signed char)-36;
short var_11 = (short)-21267;
unsigned char var_15 = (unsigned char)117;
signed char var_17 = (signed char)-42;
int zero = 0;
unsigned long long int var_20 = 2835732954143270717ULL;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)22;
short var_23 = (short)2659;
_Bool var_24 = (_Bool)0;
long long int arr_2 [23] ;
unsigned int arr_3 [23] [23] [23] ;
unsigned int arr_4 [23] ;
signed char arr_5 [23] ;
unsigned int arr_6 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 4389163075235297592LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1438200803U : 2954884081U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 782940987U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)-17 : (signed char)-69;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 651388752U : 2836035280U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
