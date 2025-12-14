#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 441260793U;
unsigned long long int var_4 = 13582654673025683151ULL;
unsigned long long int var_6 = 1940550074264039610ULL;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)18837;
_Bool var_10 = (_Bool)1;
unsigned long long int var_12 = 12216306573789954076ULL;
short var_14 = (short)-15681;
long long int var_15 = 5955154890056476875LL;
unsigned long long int var_16 = 10021584837797689831ULL;
signed char var_17 = (signed char)-107;
int zero = 0;
unsigned int var_18 = 3269244962U;
unsigned long long int var_19 = 1111503818987809196ULL;
int var_20 = -1466099246;
unsigned long long int var_21 = 4370362196661831721ULL;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-27052;
unsigned char arr_2 [11] ;
_Bool arr_3 [11] [11] [11] ;
long long int arr_5 [11] [11] [11] ;
short arr_8 [11] [11] [11] [11] ;
unsigned int arr_11 [19] ;
unsigned int arr_13 [19] ;
unsigned long long int arr_10 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)45 : (unsigned char)52;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 6683498872260457019LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (short)20579;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = 260951926U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = 1151414939U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 7048318441056893873ULL : 9601979980374913768ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
