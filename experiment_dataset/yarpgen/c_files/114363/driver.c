#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 168692738546895037ULL;
signed char var_3 = (signed char)55;
short var_5 = (short)85;
long long int var_6 = 3178073580303269897LL;
short var_7 = (short)7138;
short var_9 = (short)22458;
long long int var_10 = -2423888608890771452LL;
unsigned long long int var_11 = 16271520173238329474ULL;
unsigned long long int var_12 = 16449796683738634891ULL;
int zero = 0;
short var_14 = (short)-7541;
long long int var_15 = -1137683431169245983LL;
_Bool var_16 = (_Bool)0;
int var_17 = 1407724860;
signed char arr_1 [24] ;
unsigned short arr_4 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)48;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)58573;
}

void checksum() {
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
