#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 584339292U;
unsigned int var_2 = 1338925967U;
int var_5 = -1126427244;
int var_6 = -1453185550;
short var_10 = (short)9440;
int zero = 0;
short var_13 = (short)5078;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)46144;
unsigned int var_16 = 159578668U;
unsigned int var_17 = 3368779937U;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)184;
unsigned int arr_0 [24] ;
unsigned char arr_1 [24] ;
unsigned long long int arr_2 [24] [24] ;
unsigned int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 845905420U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)10;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 13197237490699791849ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 2155403718U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
