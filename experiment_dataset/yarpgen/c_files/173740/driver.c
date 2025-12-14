#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_12 = 569590800;
unsigned int var_13 = 3075770030U;
int var_14 = 1958407214;
long long int var_15 = 7623940389848683593LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = 8149845738461815487LL;
short var_20 = (short)8759;
unsigned int var_21 = 4107153366U;
long long int arr_0 [14] ;
int arr_2 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -3268447520942821787LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = -1320790120;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
