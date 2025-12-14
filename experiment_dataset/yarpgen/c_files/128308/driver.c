#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 367437421;
short var_5 = (short)11748;
signed char var_10 = (signed char)-33;
int zero = 0;
long long int var_17 = -5604776403532504452LL;
long long int var_18 = -8712335271746244997LL;
_Bool var_19 = (_Bool)1;
short var_20 = (short)3002;
unsigned short var_21 = (unsigned short)14597;
_Bool arr_3 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
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
