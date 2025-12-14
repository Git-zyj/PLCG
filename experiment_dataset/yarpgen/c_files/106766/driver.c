#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)45857;
int var_3 = 786683946;
int var_4 = -2127637789;
signed char var_7 = (signed char)-122;
int var_9 = 992247634;
unsigned short var_10 = (unsigned short)25514;
signed char var_12 = (signed char)-46;
unsigned int var_14 = 1825025513U;
unsigned char var_15 = (unsigned char)246;
unsigned short var_18 = (unsigned short)43825;
int zero = 0;
signed char var_19 = (signed char)-19;
unsigned short var_20 = (unsigned short)32515;
unsigned long long int arr_3 [15] [15] ;
unsigned int arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = 11567799679005771498ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 114617563U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
