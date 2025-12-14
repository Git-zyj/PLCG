#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15655848777984035240ULL;
int var_2 = 435041227;
unsigned short var_5 = (unsigned short)42564;
unsigned char var_6 = (unsigned char)50;
unsigned char var_7 = (unsigned char)8;
unsigned int var_8 = 971046019U;
int zero = 0;
unsigned int var_10 = 4077684747U;
unsigned char var_11 = (unsigned char)8;
unsigned char var_12 = (unsigned char)58;
unsigned char var_13 = (unsigned char)247;
unsigned char var_14 = (unsigned char)167;
unsigned char arr_1 [11] ;
unsigned char arr_5 [11] ;
unsigned short arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)53;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (unsigned short)25627;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
