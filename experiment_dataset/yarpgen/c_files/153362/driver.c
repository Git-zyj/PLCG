#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 132482390U;
unsigned int var_2 = 500574095U;
signed char var_4 = (signed char)-92;
long long int var_5 = 7747817610526976204LL;
signed char var_7 = (signed char)37;
unsigned long long int var_9 = 9527083295558600630ULL;
unsigned short var_10 = (unsigned short)53525;
int zero = 0;
unsigned int var_12 = 3454007085U;
unsigned short var_13 = (unsigned short)35792;
short var_14 = (short)12884;
signed char var_15 = (signed char)7;
long long int var_16 = 6377819462170029990LL;
long long int arr_0 [20] [20] ;
short arr_3 [20] ;
int arr_6 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 3470218484393983955LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (short)-32454;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1723409533;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
