#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -426524459;
int var_6 = 466555182;
unsigned int var_7 = 2719444643U;
int zero = 0;
short var_12 = (short)-15933;
unsigned long long int var_13 = 10947846566487571751ULL;
unsigned short var_14 = (unsigned short)22256;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)19638;
signed char arr_1 [12] ;
unsigned int arr_5 [11] ;
long long int arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)59;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 108166407U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 8469714414849843955LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
