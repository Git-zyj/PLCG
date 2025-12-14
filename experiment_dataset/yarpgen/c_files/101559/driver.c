#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 12684264052022493980ULL;
unsigned int var_7 = 192446652U;
signed char var_9 = (signed char)109;
unsigned char var_17 = (unsigned char)241;
int zero = 0;
int var_18 = 983977535;
int var_19 = 1438353720;
long long int var_20 = 4146346927634102003LL;
unsigned char var_21 = (unsigned char)191;
unsigned short var_22 = (unsigned short)22693;
short var_23 = (short)-20881;
short var_24 = (short)21540;
unsigned int var_25 = 370546974U;
unsigned long long int var_26 = 14090753571600617839ULL;
unsigned char var_27 = (unsigned char)82;
unsigned char var_28 = (unsigned char)216;
int arr_0 [11] ;
int arr_3 [25] [25] ;
int arr_4 [25] ;
unsigned char arr_6 [25] [25] ;
unsigned short arr_7 [25] [25] ;
int arr_5 [25] ;
unsigned int arr_8 [25] ;
int arr_11 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 1502451245;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = -197107343;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 1319284744;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)11 : (unsigned char)232;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)59748 : (unsigned short)47378;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = -1307425750;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 2462694681U : 2968949748U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = -1601408794;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
