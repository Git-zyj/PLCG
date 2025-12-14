#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_2 = 3501051265021400927ULL;
unsigned long long int var_5 = 5426022591334797212ULL;
unsigned char var_6 = (unsigned char)32;
unsigned long long int var_8 = 5358158643987409600ULL;
unsigned long long int var_14 = 7542932343741088434ULL;
unsigned char var_15 = (unsigned char)134;
int zero = 0;
unsigned char var_16 = (unsigned char)160;
long long int var_17 = 8083512804267121841LL;
_Bool var_18 = (_Bool)1;
int var_19 = -831451261;
int var_20 = -2117808658;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
long long int arr_2 [21] ;
_Bool arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 1963620995402189944LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
