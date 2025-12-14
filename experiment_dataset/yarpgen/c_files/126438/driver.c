#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2039931580;
unsigned long long int var_1 = 11191693460987452858ULL;
signed char var_2 = (signed char)-121;
signed char var_3 = (signed char)64;
unsigned int var_4 = 3286855806U;
short var_5 = (short)-26206;
signed char var_6 = (signed char)47;
long long int var_7 = 8811859699356333787LL;
unsigned short var_8 = (unsigned short)4695;
unsigned int var_10 = 221728624U;
int zero = 0;
int var_11 = -526624227;
unsigned char var_12 = (unsigned char)114;
unsigned char var_13 = (unsigned char)74;
signed char var_14 = (signed char)80;
unsigned short var_15 = (unsigned short)9828;
signed char var_16 = (signed char)33;
long long int var_17 = 9193882186009370939LL;
long long int var_18 = -7470608867211784882LL;
signed char var_19 = (signed char)31;
long long int var_20 = 1793638263974128762LL;
short var_21 = (short)17931;
unsigned long long int arr_0 [25] ;
short arr_1 [25] ;
unsigned short arr_3 [23] ;
signed char arr_4 [23] ;
unsigned char arr_5 [23] ;
short arr_6 [12] ;
_Bool arr_8 [12] ;
unsigned char arr_9 [12] ;
int arr_12 [11] [11] ;
unsigned short arr_13 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 16115372345806570797ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (short)25691;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned short)4572;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (signed char)-26;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (short)522;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_12 [i_0] [i_1] = -1674376888;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = (unsigned short)17467;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
