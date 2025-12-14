#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3235488054U;
short var_1 = (short)-7271;
long long int var_2 = 4987519189072020162LL;
unsigned short var_3 = (unsigned short)4460;
unsigned long long int var_7 = 247888870772843972ULL;
short var_8 = (short)-13389;
int var_10 = 949320164;
int zero = 0;
unsigned long long int var_11 = 2270871297536526525ULL;
unsigned long long int var_12 = 6742988457260986795ULL;
signed char var_13 = (signed char)-68;
short var_14 = (short)-7009;
long long int var_15 = 2170073394600074346LL;
int var_16 = 1739678428;
signed char var_17 = (signed char)16;
int var_18 = -1849863577;
unsigned int var_19 = 1281593170U;
unsigned short arr_0 [13] [13] ;
unsigned long long int arr_1 [13] ;
long long int arr_3 [13] [13] ;
int arr_4 [13] [13] ;
int arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)49345;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 6225262077557389284ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = 2219533064464450770LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 544804424;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 1369054047;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
