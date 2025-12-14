#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)47;
signed char var_6 = (signed char)69;
int var_13 = -1062838488;
signed char var_16 = (signed char)116;
unsigned long long int var_18 = 14120321062140429011ULL;
int zero = 0;
short var_19 = (short)21881;
unsigned int var_20 = 1012644035U;
unsigned int arr_1 [24] ;
signed char arr_3 [24] ;
unsigned short arr_4 [24] [24] ;
signed char arr_5 [24] ;
unsigned long long int arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 2243500373U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (signed char)67;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)40024;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (signed char)65;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 2492152888709433127ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
