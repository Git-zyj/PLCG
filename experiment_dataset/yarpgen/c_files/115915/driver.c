#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2994638523U;
unsigned char var_1 = (unsigned char)6;
long long int var_2 = -2877567217708448630LL;
unsigned char var_5 = (unsigned char)119;
long long int var_7 = -3443682308382297003LL;
unsigned long long int var_8 = 7837856111014080427ULL;
unsigned short var_11 = (unsigned short)12544;
int zero = 0;
unsigned char var_14 = (unsigned char)185;
unsigned char var_15 = (unsigned char)170;
unsigned long long int var_16 = 605687323515784502ULL;
unsigned long long int var_17 = 225262207562903348ULL;
unsigned char arr_0 [12] ;
signed char arr_1 [12] [12] ;
short arr_2 [12] ;
unsigned long long int arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned char)46;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)65;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (short)11179;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 6161465955892760472ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
