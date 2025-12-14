#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-19423;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 3345837463U;
int var_4 = -936234458;
unsigned long long int var_7 = 11395011853061827588ULL;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 5680574776932497564ULL;
int var_12 = 1893506284;
unsigned short var_17 = (unsigned short)56548;
int zero = 0;
signed char var_18 = (signed char)114;
int var_19 = 288910375;
unsigned short var_20 = (unsigned short)17187;
int var_21 = 1408334037;
int arr_3 [10] ;
_Bool arr_4 [10] [10] [10] ;
unsigned int arr_5 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = -2136140088;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = 2073733021U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
