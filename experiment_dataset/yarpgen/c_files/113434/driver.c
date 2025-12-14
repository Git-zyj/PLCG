#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)90;
unsigned char var_5 = (unsigned char)8;
int var_7 = 657836819;
short var_8 = (short)-24137;
int zero = 0;
unsigned short var_13 = (unsigned short)4387;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)44157;
long long int var_16 = -986787413439422647LL;
long long int var_17 = -3660674337133454888LL;
short var_18 = (short)-16227;
long long int arr_0 [12] ;
_Bool arr_5 [12] ;
short arr_7 [18] ;
unsigned short arr_10 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = -4078703893497797406LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (short)204;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)48131;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
