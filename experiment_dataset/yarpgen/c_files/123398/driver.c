#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)52598;
unsigned char var_5 = (unsigned char)213;
unsigned long long int var_7 = 11287817750198237668ULL;
int zero = 0;
int var_11 = -1340203561;
unsigned short var_12 = (unsigned short)36477;
signed char var_13 = (signed char)-39;
unsigned long long int var_14 = 9697345462849626979ULL;
unsigned int var_15 = 3404478022U;
short var_16 = (short)14768;
unsigned long long int arr_0 [21] ;
unsigned short arr_2 [21] ;
int arr_3 [23] ;
short arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 15125623649146310931ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned short)34944;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1041081041 : 811116636;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (short)21085;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
