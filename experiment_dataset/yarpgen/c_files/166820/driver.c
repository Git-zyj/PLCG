#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16108408962845278630ULL;
unsigned short var_5 = (unsigned short)7468;
int var_17 = -1783010782;
int zero = 0;
unsigned short var_19 = (unsigned short)23124;
int var_20 = 1059854844;
_Bool var_21 = (_Bool)1;
_Bool arr_0 [23] ;
unsigned short arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned short)10678;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
