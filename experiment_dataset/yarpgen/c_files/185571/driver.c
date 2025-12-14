#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_8 = (short)-1253;
unsigned long long int var_11 = 17294758485398381583ULL;
unsigned int var_12 = 215189199U;
unsigned short var_13 = (unsigned short)32264;
int zero = 0;
unsigned long long int var_14 = 6668325789210510176ULL;
short var_15 = (short)31490;
unsigned int var_16 = 578575727U;
unsigned char var_17 = (unsigned char)127;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)14206;
signed char var_20 = (signed char)-58;
signed char arr_0 [19] ;
unsigned short arr_1 [19] [19] ;
int arr_2 [19] ;
signed char arr_3 [19] [19] ;
unsigned int arr_4 [19] [19] [19] ;
unsigned int arr_5 [19] ;
unsigned char arr_6 [11] [11] ;
unsigned char arr_8 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (signed char)89;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)20210;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 473473279;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)119;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 221797827U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 2935315316U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (unsigned char)95;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
