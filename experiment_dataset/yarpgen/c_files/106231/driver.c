#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)0;
unsigned long long int var_11 = 10159900364644570297ULL;
unsigned short var_13 = (unsigned short)35739;
unsigned char var_14 = (unsigned char)31;
unsigned short var_15 = (unsigned short)33004;
unsigned char var_19 = (unsigned char)3;
int zero = 0;
int var_20 = -238474121;
long long int var_21 = 923495945274370723LL;
signed char var_22 = (signed char)-8;
long long int var_23 = -7621316304175294081LL;
unsigned long long int var_24 = 12259377618852278320ULL;
unsigned int var_25 = 4040682186U;
long long int arr_0 [25] ;
short arr_2 [25] ;
int arr_3 [25] ;
unsigned short arr_6 [20] ;
unsigned long long int arr_7 [20] [20] [20] ;
unsigned long long int arr_4 [25] ;
int arr_9 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 6297926291837572442LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (short)-23563;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = -1974434030;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (unsigned short)65298;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 4531027070441543174ULL : 6196715522169444409ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 9282760540156276594ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 1292713726 : -2134349415;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
