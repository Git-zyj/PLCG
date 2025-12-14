#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_2 = 17850319386832222074ULL;
signed char var_6 = (signed char)91;
unsigned short var_7 = (unsigned short)10879;
short var_8 = (short)5434;
short var_9 = (short)16689;
unsigned long long int var_11 = 1358149429798763452ULL;
unsigned char var_12 = (unsigned char)140;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)46;
unsigned short var_15 = (unsigned short)59728;
signed char var_16 = (signed char)-72;
short var_17 = (short)-28799;
short var_18 = (short)30317;
unsigned int var_19 = 3250247811U;
unsigned short arr_2 [10] ;
signed char arr_3 [10] ;
unsigned short arr_6 [10] ;
unsigned int arr_10 [16] ;
unsigned int arr_8 [10] ;
signed char arr_12 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned short)14200;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (signed char)5;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (unsigned short)43083;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = 2821745980U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = 2705004897U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)46 : (signed char)12;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
