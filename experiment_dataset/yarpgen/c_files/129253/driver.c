#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)63458;
short var_3 = (short)-6797;
unsigned char var_5 = (unsigned char)25;
long long int var_6 = 2765319372058609534LL;
unsigned long long int var_7 = 18110517264727313062ULL;
unsigned long long int var_9 = 16656895810982929836ULL;
int zero = 0;
long long int var_10 = 9127169817012830008LL;
long long int var_11 = 4807109502220831392LL;
_Bool var_12 = (_Bool)0;
long long int var_13 = -7312107671652463046LL;
unsigned char var_14 = (unsigned char)14;
unsigned char var_15 = (unsigned char)55;
int var_16 = -942226611;
unsigned char var_17 = (unsigned char)247;
_Bool arr_0 [24] [24] ;
unsigned short arr_1 [24] [24] ;
short arr_2 [24] [24] ;
long long int arr_4 [24] [24] ;
int arr_8 [24] ;
signed char arr_10 [24] [24] [24] [24] ;
unsigned int arr_3 [24] ;
_Bool arr_14 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)31857;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (short)30273;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 9046860738303365644LL : 4819820156238359712LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = -1397585329;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (signed char)125;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 628207359U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
