#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3773;
_Bool var_1 = (_Bool)0;
long long int var_2 = -8542207497358711775LL;
int var_3 = 2078792944;
unsigned short var_4 = (unsigned short)32690;
unsigned short var_5 = (unsigned short)38433;
_Bool var_6 = (_Bool)1;
int var_7 = 1544226612;
unsigned int var_8 = 460220651U;
int var_11 = 365960726;
unsigned char var_13 = (unsigned char)209;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_16 = 42216009730564471LL;
short var_17 = (short)-27477;
signed char var_18 = (signed char)-110;
unsigned int var_19 = 163863602U;
long long int var_20 = -7598669594955177075LL;
unsigned int var_21 = 1108469699U;
unsigned int var_22 = 3456406854U;
int var_23 = 2110715499;
unsigned short var_24 = (unsigned short)63306;
long long int arr_3 [10] [10] [10] ;
unsigned char arr_6 [10] ;
unsigned short arr_10 [10] ;
signed char arr_12 [10] [10] [10] ;
unsigned int arr_14 [10] [10] ;
_Bool arr_7 [10] [10] [10] [10] ;
unsigned short arr_8 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 6912643290302250726LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (unsigned short)14860;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)63 : (signed char)96;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_14 [i_0] [i_1] = 3246820896U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (unsigned short)24445;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_7 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
