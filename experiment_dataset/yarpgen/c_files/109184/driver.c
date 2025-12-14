#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)201;
long long int var_2 = -6590334834703667337LL;
signed char var_3 = (signed char)79;
unsigned short var_4 = (unsigned short)51938;
unsigned int var_5 = 3282477325U;
unsigned int var_6 = 1679262779U;
unsigned char var_7 = (unsigned char)9;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)57504;
unsigned long long int var_11 = 5869906308697348713ULL;
long long int var_12 = 783365798396616916LL;
int zero = 0;
int var_13 = -1824037573;
unsigned short var_14 = (unsigned short)24130;
int var_15 = 786094149;
signed char var_16 = (signed char)67;
unsigned short var_17 = (unsigned short)48560;
short var_18 = (short)10977;
long long int arr_4 [23] [23] [23] ;
unsigned short arr_5 [23] [23] [23] ;
short arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -3976983641262293154LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)2798;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)-6334 : (short)8314;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
