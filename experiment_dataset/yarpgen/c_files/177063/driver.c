#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-24023;
int var_2 = -1962681512;
unsigned int var_6 = 2039668065U;
unsigned char var_9 = (unsigned char)254;
unsigned short var_10 = (unsigned short)6012;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned char var_13 = (unsigned char)4;
unsigned long long int var_14 = 10053974732308811981ULL;
long long int var_15 = -3489839673141580984LL;
unsigned char var_16 = (unsigned char)239;
int var_17 = -951289479;
_Bool arr_0 [24] ;
unsigned int arr_2 [24] ;
long long int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 4201744427U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 6296730108938263734LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
