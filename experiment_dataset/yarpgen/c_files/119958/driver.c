#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = -4806732395309761835LL;
long long int var_3 = -520115014365039604LL;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)163;
unsigned short var_14 = (unsigned short)15107;
unsigned short var_15 = (unsigned short)36786;
unsigned long long int var_16 = 18050932960608022981ULL;
int zero = 0;
signed char var_17 = (signed char)-35;
short var_18 = (short)21358;
unsigned int var_19 = 2986128233U;
int var_20 = -1308625644;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 3274760429U;
unsigned long long int var_23 = 4778443583394674292ULL;
unsigned long long int var_24 = 2964232588861847179ULL;
short arr_0 [23] [23] ;
unsigned short arr_1 [23] ;
_Bool arr_2 [23] [23] ;
signed char arr_8 [21] [21] [21] ;
long long int arr_6 [21] ;
unsigned long long int arr_13 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (short)30498;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)10562;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)-108;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = -277590638696507769LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 6157237958806333774ULL : 7876517506698472383ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
