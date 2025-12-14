#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3038402842U;
signed char var_9 = (signed char)-88;
int var_11 = 1438355363;
signed char var_13 = (signed char)-5;
unsigned int var_19 = 1495344459U;
int zero = 0;
int var_20 = 1719700496;
unsigned long long int var_21 = 8728073867037477980ULL;
unsigned int var_22 = 1924312835U;
unsigned long long int var_23 = 6497082086621508746ULL;
unsigned long long int arr_1 [10] [10] ;
unsigned int arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 14989341535691011331ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 50542344U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
