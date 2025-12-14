#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1485998245;
int var_1 = -1869146648;
unsigned short var_3 = (unsigned short)40877;
int var_4 = -753366296;
unsigned short var_6 = (unsigned short)55885;
unsigned short var_7 = (unsigned short)44119;
int var_9 = 858689154;
int zero = 0;
int var_10 = -1739754074;
int var_11 = 1148882143;
unsigned short var_12 = (unsigned short)40625;
int var_13 = -686526611;
unsigned short var_14 = (unsigned short)3421;
unsigned short arr_0 [25] [25] ;
int arr_1 [25] ;
int arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)47014;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -1562469123;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -1195592954;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
