#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 504750047221283280ULL;
short var_2 = (short)-12510;
unsigned short var_3 = (unsigned short)24144;
long long int var_9 = 6556220839905548064LL;
int zero = 0;
signed char var_11 = (signed char)68;
short var_12 = (short)-219;
unsigned short var_13 = (unsigned short)6975;
signed char var_14 = (signed char)13;
unsigned int var_15 = 1873276890U;
short arr_0 [16] ;
unsigned char arr_1 [16] ;
short arr_2 [16] [16] [16] ;
unsigned long long int arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (short)-6139;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)24392;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 1763935179413161991ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
