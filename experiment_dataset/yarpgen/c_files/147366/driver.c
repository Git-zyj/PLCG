#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -153049824;
unsigned char var_9 = (unsigned char)90;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)53516;
int zero = 0;
short var_15 = (short)1541;
unsigned long long int var_16 = 9443858586969754792ULL;
int var_17 = -446568548;
unsigned char var_18 = (unsigned char)146;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)57002;
unsigned int arr_0 [25] ;
unsigned char arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 3873987592U : 2232744311U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned char)8;
}

void checksum() {
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
