#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-31310;
signed char var_3 = (signed char)125;
int var_5 = 564532644;
short var_6 = (short)-25765;
short var_7 = (short)-9807;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned short var_12 = (unsigned short)63467;
unsigned long long int var_13 = 5398375056998010077ULL;
unsigned short var_14 = (unsigned short)60472;
short var_15 = (short)-25848;
long long int var_16 = 4173391436833024410LL;
short var_17 = (short)-12985;
_Bool var_18 = (_Bool)1;
long long int var_19 = -1494615906433462785LL;
unsigned long long int arr_0 [11] [11] ;
short arr_1 [11] [11] ;
unsigned long long int arr_2 [11] ;
unsigned int arr_5 [11] ;
short arr_3 [11] ;
unsigned int arr_4 [11] ;
unsigned short arr_8 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 12552721688389575758ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-30230;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 978133273747158003ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 962839403U : 3212629877U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (short)-4200;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 3809813805U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)44716 : (unsigned short)31660;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
