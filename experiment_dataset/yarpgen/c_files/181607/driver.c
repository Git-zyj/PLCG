#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8847928961343630424LL;
unsigned short var_2 = (unsigned short)24580;
_Bool var_4 = (_Bool)0;
unsigned short var_7 = (unsigned short)27236;
unsigned short var_9 = (unsigned short)17558;
unsigned long long int var_10 = 1223863944374330730ULL;
_Bool var_11 = (_Bool)1;
unsigned short var_13 = (unsigned short)57024;
short var_15 = (short)-30106;
short var_16 = (short)-19105;
int zero = 0;
unsigned short var_17 = (unsigned short)19896;
unsigned short var_18 = (unsigned short)38702;
int var_19 = 1957358773;
short var_20 = (short)31975;
signed char arr_0 [11] [11] ;
int arr_1 [11] ;
short arr_3 [11] ;
short arr_4 [11] [11] ;
short arr_6 [11] [11] ;
int arr_7 [11] ;
unsigned short arr_8 [11] [11] ;
unsigned short arr_9 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)111;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -1376964785;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (short)-12989;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-21437;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (short)11341;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = -1786455341;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)63962;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (unsigned short)5846;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
