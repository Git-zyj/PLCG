#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1388353924;
unsigned short var_4 = (unsigned short)36623;
int var_5 = -1137991472;
short var_6 = (short)31163;
signed char var_7 = (signed char)109;
unsigned int var_9 = 3725761349U;
int var_10 = -1116153662;
int zero = 0;
int var_11 = -1638203731;
short var_12 = (short)-19546;
signed char var_13 = (signed char)-33;
_Bool var_14 = (_Bool)0;
long long int var_15 = 4367117660341107829LL;
int var_16 = 1816093029;
long long int var_17 = -252629416947237176LL;
int arr_0 [24] ;
int arr_1 [24] ;
long long int arr_2 [24] [24] ;
short arr_5 [24] ;
long long int arr_6 [24] ;
unsigned short arr_7 [24] ;
int arr_8 [24] ;
unsigned int arr_11 [13] ;
unsigned int arr_12 [13] ;
int arr_13 [13] [13] [13] ;
int arr_3 [24] ;
unsigned int arr_4 [24] ;
int arr_9 [24] [24] ;
int arr_15 [13] [13] [13] ;
short arr_16 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 1530150781;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -1132356478;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 7399239031880595683LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (short)-12284;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 5892000958750914845LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (unsigned short)11346;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = -1641529276;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 3081267084U : 2009913047U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 3817198170U : 3436814071U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 1768816847;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = -25284640;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 1283222217U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = -656061713;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -1527978742 : 2032240791;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)19987 : (short)-14614;
}

void checksum() {
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
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
