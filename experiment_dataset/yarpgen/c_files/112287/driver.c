#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)2975;
int var_2 = -1585387777;
unsigned short var_3 = (unsigned short)29252;
signed char var_9 = (signed char)-92;
signed char var_10 = (signed char)-5;
int zero = 0;
long long int var_11 = -6578113947708775334LL;
unsigned long long int var_12 = 16277030615335594100ULL;
_Bool arr_0 [14] ;
short arr_2 [14] ;
int arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (short)16728;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = -414340679;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
