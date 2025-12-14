#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-1472;
int var_3 = 2128592909;
unsigned int var_5 = 222872997U;
unsigned int var_8 = 4109684585U;
int zero = 0;
int var_10 = -628613265;
unsigned long long int var_11 = 13108394637427398008ULL;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)58;
unsigned char var_14 = (unsigned char)28;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 10959187961404304614ULL;
signed char arr_0 [20] ;
long long int arr_1 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (signed char)117;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 6713777409227345767LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
