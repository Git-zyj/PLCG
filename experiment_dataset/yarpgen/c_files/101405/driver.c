#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 509310975U;
_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned short var_7 = (unsigned short)22941;
signed char var_10 = (signed char)0;
unsigned short var_13 = (unsigned short)2731;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)14510;
short var_16 = (short)18673;
unsigned int var_17 = 2371496323U;
short var_18 = (short)31993;
short var_19 = (short)-8438;
unsigned int var_20 = 373758874U;
unsigned long long int var_21 = 10714198769921146561ULL;
_Bool arr_3 [20] [20] ;
short arr_4 [20] [20] ;
long long int arr_6 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-7938;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = -4419428668153579267LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
