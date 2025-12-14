#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)22742;
unsigned short var_5 = (unsigned short)15293;
unsigned long long int var_8 = 3366367614123582436ULL;
unsigned int var_13 = 3507437382U;
unsigned int var_15 = 2668255906U;
int zero = 0;
signed char var_16 = (signed char)-31;
unsigned short var_17 = (unsigned short)11148;
short var_18 = (short)23312;
long long int var_19 = 5340856110453057202LL;
int arr_0 [12] ;
long long int arr_1 [12] [12] ;
unsigned long long int arr_2 [12] ;
unsigned int arr_4 [12] [12] ;
unsigned int arr_5 [12] ;
unsigned int arr_7 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 871114140;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 6292701117350563277LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 16602882530071672991ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 2117194707U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 1503101747U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 2662750273U : 2665839424U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
