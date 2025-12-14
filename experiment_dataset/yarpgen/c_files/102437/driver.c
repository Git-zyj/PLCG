#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = 878242951487230334LL;
unsigned short var_3 = (unsigned short)16837;
int var_6 = -284193044;
signed char var_7 = (signed char)-122;
short var_8 = (short)-8954;
unsigned long long int var_10 = 6635531287197739789ULL;
int var_11 = 1153933447;
unsigned char var_12 = (unsigned char)97;
long long int var_13 = -6231358097685592495LL;
int zero = 0;
int var_16 = -217503428;
signed char var_17 = (signed char)76;
int var_18 = 1648153672;
unsigned long long int var_19 = 16575517124293798558ULL;
unsigned long long int var_20 = 11646124263008134063ULL;
unsigned long long int var_21 = 5332842314676747129ULL;
int var_22 = 1709064470;
unsigned char var_23 = (unsigned char)136;
int arr_0 [14] ;
unsigned long long int arr_1 [14] ;
int arr_2 [14] [14] ;
_Bool arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -1254458220;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 8119382602162804591ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = -360314877;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
