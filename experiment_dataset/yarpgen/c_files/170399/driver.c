#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1826880830;
short var_9 = (short)14393;
int zero = 0;
unsigned char var_10 = (unsigned char)255;
long long int var_11 = -2911128127112126697LL;
unsigned char var_12 = (unsigned char)219;
unsigned long long int var_13 = 14936458502144454193ULL;
int var_14 = 1282417875;
unsigned char var_15 = (unsigned char)185;
int arr_0 [24] ;
unsigned long long int arr_1 [24] ;
unsigned char arr_3 [11] ;
unsigned char arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 673086597;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 11383209044040549318ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)10 : (unsigned char)120;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
