#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1545125751U;
unsigned short var_3 = (unsigned short)16365;
long long int var_4 = 5384154684700141186LL;
long long int var_6 = -1279337160134374437LL;
signed char var_8 = (signed char)89;
unsigned long long int var_13 = 6194690049449496418ULL;
int zero = 0;
int var_14 = -1057584279;
unsigned long long int var_15 = 5949536252111071283ULL;
_Bool var_16 = (_Bool)0;
unsigned int arr_1 [23] [23] ;
long long int arr_2 [23] [23] ;
unsigned int arr_5 [23] ;
unsigned short arr_7 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 2502941454U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 5481540709949156108LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 1898793787U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (unsigned short)37767;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
