#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-7862;
signed char var_5 = (signed char)23;
unsigned char var_9 = (unsigned char)83;
unsigned long long int var_10 = 3473447957689478544ULL;
unsigned short var_13 = (unsigned short)7064;
int zero = 0;
unsigned char var_16 = (unsigned char)71;
unsigned long long int var_17 = 877937865359937450ULL;
short var_18 = (short)792;
unsigned short var_19 = (unsigned short)11347;
unsigned short var_20 = (unsigned short)22094;
int arr_0 [12] [12] ;
int arr_1 [12] ;
unsigned char arr_3 [12] [12] [12] ;
long long int arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = -270906027;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 1604862269;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 2768206200500233107LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
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
