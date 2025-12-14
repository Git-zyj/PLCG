#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)24248;
short var_8 = (short)7909;
unsigned int var_9 = 3873188820U;
signed char var_10 = (signed char)80;
unsigned long long int var_11 = 10576542173416965548ULL;
short var_12 = (short)21547;
signed char var_13 = (signed char)75;
int zero = 0;
short var_14 = (short)4077;
unsigned int var_15 = 1918097637U;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)5406;
int var_18 = -739923062;
_Bool var_19 = (_Bool)1;
unsigned int arr_0 [12] ;
int arr_1 [12] [12] ;
int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 928079283U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 1287367813;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 1829729294;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
