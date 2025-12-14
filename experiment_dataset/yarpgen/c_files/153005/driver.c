#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3637446676U;
unsigned int var_2 = 3050816329U;
unsigned int var_3 = 1371047048U;
unsigned int var_4 = 889452373U;
unsigned int var_7 = 171830297U;
unsigned int var_8 = 2516159103U;
unsigned int var_9 = 847319407U;
unsigned int var_10 = 1012694253U;
unsigned int var_12 = 217387990U;
int zero = 0;
unsigned int var_14 = 3618896776U;
unsigned int var_15 = 3897144430U;
unsigned int var_16 = 289739042U;
unsigned int var_17 = 63690954U;
unsigned int var_18 = 370845176U;
unsigned int var_19 = 109047373U;
unsigned int arr_0 [20] ;
unsigned int arr_3 [23] [23] ;
unsigned int arr_4 [23] [23] ;
unsigned int arr_2 [20] ;
unsigned int arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 3891526576U : 2529770956U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 3371922964U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 2624796917U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1674973236U : 2091496288U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 2021992386U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
