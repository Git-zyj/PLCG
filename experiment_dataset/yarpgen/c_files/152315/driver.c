#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 684849508;
_Bool var_3 = (_Bool)0;
unsigned int var_6 = 3705416015U;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)29987;
unsigned short var_9 = (unsigned short)65158;
unsigned int var_10 = 2643144398U;
long long int var_12 = -5789574401313930106LL;
unsigned int var_16 = 2596336323U;
int zero = 0;
signed char var_17 = (signed char)-106;
short var_18 = (short)1451;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
unsigned long long int arr_1 [12] ;
unsigned short arr_2 [12] ;
_Bool arr_3 [12] [12] ;
long long int arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 11447754348994978578ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned short)39490;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 5620684832006331374LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
