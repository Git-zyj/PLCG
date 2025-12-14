#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)36186;
int var_3 = 794643881;
unsigned long long int var_4 = 4055860244321768544ULL;
unsigned int var_6 = 1272542195U;
short var_7 = (short)-7745;
signed char var_8 = (signed char)-31;
unsigned char var_11 = (unsigned char)109;
int zero = 0;
unsigned char var_12 = (unsigned char)154;
unsigned short var_13 = (unsigned short)51995;
unsigned char var_14 = (unsigned char)43;
unsigned short var_15 = (unsigned short)10805;
int var_16 = 774085790;
long long int var_17 = 7352112119947944173LL;
short arr_0 [13] [13] ;
unsigned long long int arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-16247;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 611078807305770820ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
