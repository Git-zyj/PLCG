#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 778564730U;
int var_1 = 2057141102;
long long int var_3 = 6331191593638095018LL;
int var_4 = -760482252;
_Bool var_5 = (_Bool)1;
int var_6 = 2104449635;
short var_7 = (short)-15402;
int var_8 = -1582339441;
long long int var_9 = -8684250902374370481LL;
unsigned char var_10 = (unsigned char)27;
int zero = 0;
_Bool var_11 = (_Bool)1;
long long int var_12 = 4755098458472245031LL;
unsigned long long int var_13 = 7294112338433865314ULL;
unsigned short var_14 = (unsigned short)37291;
unsigned char var_15 = (unsigned char)80;
signed char var_16 = (signed char)-80;
long long int var_17 = -556599857307383554LL;
unsigned int var_18 = 357452977U;
int arr_1 [15] [15] ;
unsigned int arr_8 [15] ;
unsigned long long int arr_10 [15] [15] [15] ;
unsigned int arr_4 [15] ;
int arr_9 [15] ;
_Bool arr_17 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 1323832009;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = 2364007823U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 17423400900401344592ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 943203099U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = -1935531803;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
