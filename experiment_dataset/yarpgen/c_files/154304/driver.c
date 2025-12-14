#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 309122808;
unsigned int var_2 = 1971506356U;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 3461595114U;
unsigned char var_5 = (unsigned char)110;
unsigned int var_6 = 1902821427U;
short var_7 = (short)7186;
unsigned int var_8 = 376376495U;
signed char var_9 = (signed char)-64;
unsigned char var_10 = (unsigned char)52;
int var_14 = -1663779842;
unsigned int var_15 = 314809018U;
int zero = 0;
unsigned char var_17 = (unsigned char)24;
unsigned int var_18 = 2311579303U;
signed char var_19 = (signed char)-24;
unsigned long long int var_20 = 10880665785385307290ULL;
int var_21 = 1232563907;
unsigned int var_22 = 3029679942U;
unsigned int arr_0 [20] ;
signed char arr_1 [20] ;
int arr_4 [16] [16] ;
long long int arr_5 [16] [16] ;
signed char arr_7 [16] [16] ;
unsigned char arr_2 [20] ;
unsigned long long int arr_8 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 936588649U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (signed char)-93;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 1332084652;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = -7998039377899826422LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-122;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned char)132;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = 15634488889939901329ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
