#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 927429330U;
unsigned short var_1 = (unsigned short)63922;
unsigned int var_2 = 3458704789U;
unsigned int var_3 = 1088434486U;
unsigned short var_5 = (unsigned short)44054;
unsigned short var_6 = (unsigned short)62401;
int zero = 0;
short var_10 = (short)27119;
unsigned long long int var_11 = 1639413698261532139ULL;
unsigned long long int var_12 = 5220303140116913610ULL;
unsigned int var_13 = 1607918425U;
short var_14 = (short)18686;
unsigned short arr_0 [21] [21] ;
unsigned short arr_1 [21] ;
unsigned int arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)17941;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)41124;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 4100042134U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
