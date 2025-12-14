#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2949924965U;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-124;
long long int var_4 = 9099373768416528248LL;
short var_5 = (short)28782;
short var_12 = (short)-30465;
unsigned long long int var_13 = 9262951782002529516ULL;
unsigned int var_14 = 3083320507U;
unsigned int var_16 = 1827825141U;
unsigned long long int var_17 = 16942312435935461376ULL;
int var_18 = 1856621834;
int zero = 0;
signed char var_19 = (signed char)26;
long long int var_20 = 4597802178439656375LL;
signed char var_21 = (signed char)23;
signed char arr_0 [24] ;
int arr_3 [24] ;
signed char arr_5 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)-1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = -1959888892;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)47 : (signed char)113;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
