#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)49201;
int zero = 0;
long long int var_20 = 5873501083900984369LL;
unsigned long long int var_21 = 7191605531770072720ULL;
unsigned short var_22 = (unsigned short)30836;
unsigned char arr_0 [16] [16] ;
unsigned long long int arr_1 [16] ;
unsigned char arr_2 [16] [16] ;
unsigned int arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)196;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 2288846130911809515ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)166;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 601979681U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
