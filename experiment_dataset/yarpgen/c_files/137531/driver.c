#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46727;
unsigned char var_1 = (unsigned char)56;
int var_2 = 519032411;
short var_3 = (short)2348;
short var_4 = (short)-7463;
int var_5 = -486063377;
unsigned short var_6 = (unsigned short)40819;
long long int var_7 = 4063051833558020075LL;
long long int var_8 = -1142255528106164579LL;
int zero = 0;
unsigned char var_10 = (unsigned char)192;
unsigned char var_11 = (unsigned char)209;
short var_12 = (short)-30223;
unsigned int var_13 = 3337131609U;
unsigned short var_14 = (unsigned short)64908;
signed char var_15 = (signed char)44;
unsigned char arr_0 [19] ;
unsigned char arr_2 [19] ;
_Bool arr_4 [19] [19] [19] ;
unsigned int arr_5 [19] ;
unsigned long long int arr_6 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)201;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)185;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 1077767783U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 682845655938120910ULL : 12617592951548689211ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
