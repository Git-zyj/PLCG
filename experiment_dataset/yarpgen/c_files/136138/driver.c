#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_3 = 2514540232389594811ULL;
int var_4 = -402883415;
int var_8 = -1391702730;
_Bool var_11 = (_Bool)0;
long long int var_12 = -523489284244307493LL;
long long int var_14 = -4299272534348347325LL;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)66;
int var_17 = -1456954417;
int var_18 = 22326139;
unsigned long long int var_19 = 15623807988936657663ULL;
short arr_5 [17] ;
unsigned long long int arr_11 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (short)-14881;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = 9973648629861405531ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
