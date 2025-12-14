#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1001567730U;
unsigned char var_7 = (unsigned char)131;
unsigned int var_8 = 1112789411U;
unsigned char var_12 = (unsigned char)75;
signed char var_14 = (signed char)51;
unsigned short var_17 = (unsigned short)64169;
int zero = 0;
int var_19 = -1896574235;
long long int var_20 = 6793547640776138188LL;
int var_21 = 626271616;
_Bool var_22 = (_Bool)1;
int var_23 = -148601238;
unsigned long long int arr_2 [23] ;
short arr_4 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 3725025296975430485ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (short)23575;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
