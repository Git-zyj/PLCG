#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 524837564U;
unsigned char var_9 = (unsigned char)221;
_Bool var_14 = (_Bool)1;
short var_18 = (short)20424;
int zero = 0;
unsigned int var_20 = 600546141U;
short var_21 = (short)13020;
short var_22 = (short)-23896;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)18;
_Bool arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
