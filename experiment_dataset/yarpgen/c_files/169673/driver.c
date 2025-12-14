#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16098;
long long int var_1 = 2085654107410984136LL;
short var_4 = (short)-26486;
unsigned long long int var_5 = 7251964992978624407ULL;
short var_7 = (short)-24248;
unsigned int var_8 = 3147497805U;
int zero = 0;
long long int var_10 = 5251762934156143196LL;
unsigned long long int var_11 = 11125795117740755747ULL;
unsigned short var_12 = (unsigned short)62064;
unsigned char var_13 = (unsigned char)120;
int var_14 = -456718043;
short var_15 = (short)9458;
unsigned long long int var_16 = 15542003715466730093ULL;
short arr_1 [13] ;
short arr_6 [13] ;
long long int arr_7 [13] ;
unsigned int arr_10 [14] [14] ;
long long int arr_11 [14] ;
unsigned long long int arr_13 [16] [16] ;
short arr_2 [13] ;
long long int arr_3 [13] [13] ;
short arr_4 [13] ;
short arr_8 [13] ;
unsigned int arr_9 [13] [13] ;
long long int arr_12 [14] ;
unsigned int arr_17 [14] [14] ;
unsigned int arr_18 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (short)21160;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (short)11424;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = -5078038251259689718LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = 1807194834U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = -1012885037747810190LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = 17943249188891507294ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (short)-30740;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = -5057980193442227999LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (short)6571;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (short)12069;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = 715499397U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = -5031542379724405501LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_17 [i_0] [i_1] = 2710088455U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_18 [i_0] = 1255430124U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
