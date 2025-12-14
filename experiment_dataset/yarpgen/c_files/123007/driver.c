#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)74;
unsigned long long int var_3 = 8284669674687293090ULL;
unsigned long long int var_5 = 6122711475892296446ULL;
unsigned char var_6 = (unsigned char)112;
signed char var_7 = (signed char)-44;
short var_9 = (short)-11872;
int zero = 0;
unsigned long long int var_10 = 5632621964043204127ULL;
long long int var_11 = -1782865755198157681LL;
short var_12 = (short)5387;
long long int var_13 = 9029497935283613952LL;
long long int var_14 = -9076047155218653033LL;
long long int var_15 = 7058058522136275096LL;
_Bool var_16 = (_Bool)0;
long long int var_17 = -1368643817264343764LL;
unsigned int var_18 = 783513857U;
unsigned long long int var_19 = 12114092483704776812ULL;
_Bool var_20 = (_Bool)1;
long long int arr_0 [18] ;
unsigned long long int arr_1 [18] [18] ;
_Bool arr_2 [18] [18] ;
long long int arr_4 [24] ;
short arr_5 [24] [24] ;
unsigned char arr_7 [18] [18] ;
_Bool arr_3 [18] ;
signed char arr_11 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 4778559634152420157LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 5469367077315442416ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = -8392622583280430752LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-8664;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)249;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)-126;
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
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
