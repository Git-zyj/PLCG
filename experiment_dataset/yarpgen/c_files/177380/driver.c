#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
signed char var_7 = (signed char)7;
unsigned long long int var_8 = 10657769314671657678ULL;
_Bool var_12 = (_Bool)1;
int var_13 = 2114069041;
unsigned short var_14 = (unsigned short)36527;
int zero = 0;
short var_20 = (short)22274;
unsigned int var_21 = 3071457652U;
unsigned long long int var_22 = 12378275195347371516ULL;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)4257;
int var_25 = 540917513;
signed char var_26 = (signed char)-105;
signed char arr_1 [15] [15] ;
unsigned int arr_14 [12] ;
unsigned int arr_22 [18] ;
long long int arr_23 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-80;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_14 [i_0] = 634658678U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 733828053U : 3634785763U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? 3911221143093045511LL : -2176688333956833798LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
