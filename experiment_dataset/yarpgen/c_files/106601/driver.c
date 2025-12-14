#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)517;
unsigned long long int var_8 = 11312534956942370808ULL;
long long int var_11 = 4394172567971531442LL;
unsigned int var_12 = 862598179U;
int zero = 0;
unsigned short var_18 = (unsigned short)57937;
unsigned char var_19 = (unsigned char)4;
unsigned long long int var_20 = 8563501718302813364ULL;
unsigned long long int var_21 = 10067406180603719967ULL;
_Bool arr_1 [12] ;
long long int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -4395863395475230503LL : -4194181405925198115LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
