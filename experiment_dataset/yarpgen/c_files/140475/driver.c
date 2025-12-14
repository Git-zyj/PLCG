#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1805250413;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 2290708254U;
_Bool var_3 = (_Bool)1;
int var_7 = 1900021745;
_Bool var_8 = (_Bool)0;
short var_12 = (short)17445;
int var_13 = -717005501;
unsigned short var_14 = (unsigned short)30899;
signed char var_16 = (signed char)-15;
int zero = 0;
long long int var_17 = -2914605227399284723LL;
int var_18 = -259507585;
unsigned char var_19 = (unsigned char)204;
unsigned long long int arr_0 [10] ;
long long int arr_1 [10] ;
unsigned char arr_2 [10] ;
short arr_3 [10] ;
unsigned char arr_5 [10] ;
unsigned int arr_6 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 3703704574092622624ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 2633233837972922968LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)245;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (short)12683;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned char)232;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1898883212U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
