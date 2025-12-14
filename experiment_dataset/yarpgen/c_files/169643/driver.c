#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 228977018;
int var_2 = -915917300;
unsigned short var_5 = (unsigned short)3300;
_Bool var_6 = (_Bool)1;
unsigned int var_10 = 1316921278U;
int zero = 0;
unsigned long long int var_11 = 8363283228029154103ULL;
unsigned int var_12 = 4056694730U;
unsigned char var_13 = (unsigned char)68;
signed char var_14 = (signed char)86;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-10959;
long long int var_17 = -3227555555063445910LL;
unsigned int arr_0 [19] [19] ;
int arr_2 [19] ;
short arr_3 [19] ;
long long int arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 1750774669U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -1701281285;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (short)12461;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = -2394584502505882116LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
