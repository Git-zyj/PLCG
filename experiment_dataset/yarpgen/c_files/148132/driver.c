#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 3018654354U;
unsigned short var_14 = (unsigned short)30766;
signed char var_16 = (signed char)69;
int zero = 0;
signed char var_18 = (signed char)59;
unsigned char var_19 = (unsigned char)46;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)25;
unsigned char var_22 = (unsigned char)149;
unsigned long long int var_23 = 10490067946434345713ULL;
unsigned long long int arr_0 [18] [18] ;
unsigned long long int arr_2 [18] ;
int arr_5 [18] ;
unsigned long long int arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 11851953005703609600ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 5413777684767739122ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 234312988;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 3862042534785210353ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
