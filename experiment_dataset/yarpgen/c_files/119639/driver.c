#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = -1964201925;
signed char var_4 = (signed char)73;
unsigned long long int var_6 = 9085511823512913446ULL;
unsigned char var_9 = (unsigned char)181;
long long int var_10 = 2232370075225429255LL;
signed char var_11 = (signed char)-53;
long long int var_12 = -7652799128769036581LL;
int zero = 0;
signed char var_13 = (signed char)97;
short var_14 = (short)-27897;
short var_15 = (short)25459;
long long int var_16 = 7352384408305911843LL;
short var_17 = (short)-2675;
int var_18 = -1696011093;
unsigned short var_19 = (unsigned short)49594;
unsigned int var_20 = 1255562124U;
int arr_1 [10] ;
_Bool arr_2 [10] [10] [10] ;
unsigned int arr_3 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 745473370 : -1371879020;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 1364418180U;
}

void checksum() {
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
