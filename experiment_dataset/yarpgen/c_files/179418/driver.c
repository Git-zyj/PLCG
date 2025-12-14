#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 5456099433406975078LL;
unsigned short var_6 = (unsigned short)29415;
signed char var_9 = (signed char)(-127 - 1);
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 948367528771726118ULL;
unsigned long long int var_14 = 2942099364800544445ULL;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)100;
unsigned char var_17 = (unsigned char)11;
unsigned short var_18 = (unsigned short)2640;
long long int var_19 = -6751485287525950894LL;
unsigned short arr_2 [23] ;
unsigned int arr_3 [23] ;
unsigned int arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)35078;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 2515424937U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 224998310U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
