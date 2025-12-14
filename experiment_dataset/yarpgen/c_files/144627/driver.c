#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5008420794038949291LL;
short var_4 = (short)4428;
signed char var_11 = (signed char)33;
unsigned int var_14 = 2797581012U;
unsigned char var_17 = (unsigned char)213;
int zero = 0;
short var_19 = (short)-23722;
short var_20 = (short)-6865;
unsigned long long int var_21 = 9762762334508329879ULL;
unsigned char var_22 = (unsigned char)47;
signed char var_23 = (signed char)2;
int var_24 = -2135540522;
unsigned int var_25 = 3036156826U;
short arr_0 [12] [12] ;
signed char arr_1 [12] ;
int arr_6 [12] ;
int arr_9 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (short)2791;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = -2028460426;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = -100258600;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
