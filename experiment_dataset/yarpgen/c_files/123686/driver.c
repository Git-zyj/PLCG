#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 34910513U;
short var_4 = (short)26516;
int var_5 = -1121119212;
unsigned int var_8 = 93309883U;
signed char var_10 = (signed char)-126;
int zero = 0;
signed char var_13 = (signed char)3;
signed char var_14 = (signed char)-79;
short var_15 = (short)-26226;
unsigned int var_16 = 1766346960U;
signed char var_17 = (signed char)-102;
int var_18 = 2023834001;
unsigned int arr_0 [24] [24] ;
_Bool arr_1 [24] ;
long long int arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 4030986477U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1494840902149891893LL : -5280818649185178663LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
