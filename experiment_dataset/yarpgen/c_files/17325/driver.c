#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -2058608356;
long long int var_5 = -6003115722954463129LL;
int zero = 0;
short var_11 = (short)21659;
unsigned long long int var_12 = 17311876324463302153ULL;
signed char var_13 = (signed char)-50;
unsigned int var_14 = 435077809U;
short arr_0 [15] ;
short arr_1 [15] ;
int arr_4 [15] [15] ;
int arr_5 [15] [15] ;
int arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)-6234;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)867;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = 1876675259;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = -1725831816;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 1567220981;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
