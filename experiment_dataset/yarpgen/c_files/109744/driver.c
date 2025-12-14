#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)62;
_Bool var_5 = (_Bool)1;
short var_7 = (short)9133;
unsigned long long int var_10 = 15419355716499867087ULL;
unsigned int var_12 = 1451652043U;
int zero = 0;
unsigned short var_13 = (unsigned short)48808;
unsigned int var_14 = 99741285U;
long long int var_15 = -2497322659153789398LL;
long long int var_16 = -38647968389498067LL;
unsigned int var_17 = 2161668797U;
short arr_0 [23] ;
unsigned short arr_1 [23] ;
int arr_2 [23] ;
unsigned long long int arr_3 [23] ;
unsigned short arr_5 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (short)27637;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)26691;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 346646203;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 8573980519745763263ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)25513;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
