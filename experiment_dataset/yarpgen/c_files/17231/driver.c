#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)41610;
int var_2 = 1369160184;
unsigned long long int var_5 = 16554114317690479231ULL;
unsigned short var_8 = (unsigned short)62394;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = -893145268;
unsigned int var_12 = 2581801726U;
unsigned short var_13 = (unsigned short)22168;
short var_14 = (short)-7608;
unsigned short var_15 = (unsigned short)29076;
unsigned long long int arr_1 [20] ;
unsigned long long int arr_2 [20] [20] ;
unsigned int arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 18011877632582297545ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 18380342194571357498ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 3535396060U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
