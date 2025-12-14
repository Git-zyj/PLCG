#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)236;
short var_10 = (short)-7039;
unsigned char var_12 = (unsigned char)47;
unsigned char var_13 = (unsigned char)55;
int zero = 0;
unsigned int var_19 = 2999456209U;
unsigned long long int var_20 = 7062310532784946900ULL;
short var_21 = (short)-16491;
long long int var_22 = -5210789299754143758LL;
unsigned short var_23 = (unsigned short)52187;
unsigned long long int arr_0 [20] [20] ;
signed char arr_1 [20] ;
int arr_10 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 12429748441445514620ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (signed char)122;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = -682879242;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
