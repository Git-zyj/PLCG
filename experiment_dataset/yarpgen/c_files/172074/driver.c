#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 724969139U;
long long int var_1 = 6569023350222260545LL;
unsigned char var_2 = (unsigned char)220;
unsigned int var_6 = 874884008U;
long long int var_12 = -4216829793385273989LL;
unsigned char var_13 = (unsigned char)215;
int zero = 0;
unsigned int var_14 = 2020527414U;
unsigned char var_15 = (unsigned char)19;
long long int var_16 = -2055691575945867161LL;
long long int var_17 = 4036511759570793152LL;
long long int var_18 = 8399934592778153904LL;
unsigned short var_19 = (unsigned short)57719;
unsigned char var_20 = (unsigned char)85;
unsigned int arr_2 [19] ;
unsigned char arr_6 [19] [19] [19] ;
unsigned short arr_7 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 1994782199U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (unsigned short)38212;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
