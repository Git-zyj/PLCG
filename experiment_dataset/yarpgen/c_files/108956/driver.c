#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 2542703158U;
long long int var_2 = -5477936308044835149LL;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-40;
unsigned long long int var_6 = 272905730880250267ULL;
unsigned long long int var_7 = 3122987648875943197ULL;
unsigned char var_8 = (unsigned char)110;
signed char var_9 = (signed char)-68;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned char var_11 = (unsigned char)206;
int var_12 = 2024792549;
signed char var_13 = (signed char)-22;
signed char var_14 = (signed char)-83;
unsigned char var_15 = (unsigned char)100;
unsigned long long int var_16 = 13215716276189652683ULL;
unsigned long long int var_17 = 17428094133243170234ULL;
long long int var_18 = -190044306432143178LL;
signed char arr_0 [24] [24] ;
int arr_1 [24] [24] ;
unsigned long long int arr_4 [24] [24] ;
long long int arr_5 [24] ;
int arr_6 [24] ;
int arr_7 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-38;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 1083305980;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 6856485600164572009ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 5555687848070599558LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = -1711194104;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = -1050057;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
