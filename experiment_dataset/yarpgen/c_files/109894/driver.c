#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)46088;
long long int var_2 = 1556073550042501676LL;
unsigned long long int var_4 = 4453942970417411637ULL;
int var_7 = 224716998;
unsigned short var_11 = (unsigned short)27279;
int var_13 = -487505747;
int zero = 0;
unsigned short var_15 = (unsigned short)36034;
int var_16 = 1824844603;
short var_17 = (short)5389;
int var_18 = -1853905660;
short var_19 = (short)3150;
short arr_0 [11] ;
signed char arr_1 [11] ;
long long int arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (short)-4811;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (signed char)59;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 2927251794731825142LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
