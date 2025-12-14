#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10616269975903303500ULL;
int var_1 = -2136786883;
unsigned short var_3 = (unsigned short)15061;
int var_9 = 1551583310;
short var_11 = (short)8727;
int zero = 0;
unsigned short var_12 = (unsigned short)31911;
unsigned char var_13 = (unsigned char)241;
unsigned char var_14 = (unsigned char)212;
unsigned char var_15 = (unsigned char)0;
short var_16 = (short)-25522;
signed char var_17 = (signed char)43;
unsigned int arr_2 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 2901580115U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
