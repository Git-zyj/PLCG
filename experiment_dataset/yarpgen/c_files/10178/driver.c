#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2666800639497790128ULL;
unsigned char var_3 = (unsigned char)149;
unsigned char var_4 = (unsigned char)84;
unsigned short var_10 = (unsigned short)8436;
int zero = 0;
unsigned short var_11 = (unsigned short)28752;
unsigned long long int var_12 = 15980527637385302911ULL;
unsigned long long int var_13 = 8224764732841978992ULL;
unsigned short var_14 = (unsigned short)21544;
short var_15 = (short)1787;
unsigned short arr_0 [21] ;
_Bool arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned short)309;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
