#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)60491;
unsigned short var_6 = (unsigned short)64324;
int var_7 = -508020176;
unsigned short var_8 = (unsigned short)2386;
short var_10 = (short)-16862;
int zero = 0;
unsigned short var_12 = (unsigned short)64080;
short var_13 = (short)-12323;
unsigned short var_14 = (unsigned short)14576;
short var_15 = (short)-25078;
unsigned int var_16 = 4221379639U;
unsigned int var_17 = 3859865496U;
unsigned short var_18 = (unsigned short)42584;
unsigned short var_19 = (unsigned short)64224;
unsigned short arr_1 [19] [19] ;
unsigned short arr_2 [19] ;
long long int arr_3 [19] ;
unsigned short arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)33763;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)21975;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 7543276889421711886LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (unsigned short)4839;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
