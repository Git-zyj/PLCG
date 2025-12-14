#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-60;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)79;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-19066;
unsigned int var_6 = 2909267862U;
unsigned char var_7 = (unsigned char)224;
signed char var_8 = (signed char)88;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)88;
int zero = 0;
unsigned short var_12 = (unsigned short)43995;
unsigned int var_13 = 3385731002U;
unsigned short var_14 = (unsigned short)8697;
short var_15 = (short)3513;
unsigned char var_16 = (unsigned char)53;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 1222545300U;
int var_20 = -1467223425;
signed char arr_1 [21] [21] ;
unsigned char arr_2 [25] ;
unsigned short arr_3 [25] ;
signed char arr_4 [25] ;
signed char arr_6 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)117;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned short)5899;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (signed char)-15;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
