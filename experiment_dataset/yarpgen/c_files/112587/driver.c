#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16015717937040161640ULL;
unsigned int var_4 = 1474240300U;
unsigned int var_5 = 3972687043U;
unsigned long long int var_7 = 3244186058413082543ULL;
long long int var_8 = -8320443560988445133LL;
unsigned long long int var_10 = 12496519703962287455ULL;
int zero = 0;
short var_13 = (short)-5859;
short var_14 = (short)11315;
unsigned long long int var_15 = 2318538070651628652ULL;
unsigned short var_16 = (unsigned short)33056;
unsigned long long int var_17 = 17582681376185647359ULL;
unsigned long long int arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 9637363773437110815ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
