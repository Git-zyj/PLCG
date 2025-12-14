#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7731017625298593725LL;
unsigned char var_1 = (unsigned char)246;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 1852227045016435160ULL;
unsigned char var_5 = (unsigned char)50;
int var_7 = 1176963921;
int zero = 0;
signed char var_10 = (signed char)126;
long long int var_11 = 807201352266793230LL;
_Bool var_12 = (_Bool)1;
long long int var_13 = 4803907165140811951LL;
unsigned short arr_0 [12] ;
unsigned int arr_1 [12] ;
long long int arr_2 [12] [12] ;
_Bool arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned short)34322;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 2504397807U : 2754470606U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? -2081595913610562237LL : -221321902754776759LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
