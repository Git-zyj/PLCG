#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 2343223564358685454ULL;
unsigned long long int var_7 = 11457851338010703193ULL;
signed char var_9 = (signed char)6;
signed char var_11 = (signed char)0;
unsigned char var_12 = (unsigned char)190;
int zero = 0;
unsigned char var_13 = (unsigned char)185;
unsigned long long int var_14 = 2105960049985757892ULL;
unsigned char var_15 = (unsigned char)44;
int var_16 = -1455807737;
int arr_0 [12] ;
signed char arr_1 [12] [12] ;
unsigned int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 351160568;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)8;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 2122333253U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
