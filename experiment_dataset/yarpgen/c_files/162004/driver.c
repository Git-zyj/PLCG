#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = 1331674942;
long long int var_12 = -8722893298601248664LL;
signed char var_15 = (signed char)33;
unsigned short var_17 = (unsigned short)26222;
unsigned int var_18 = 2458499014U;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)19;
unsigned int var_21 = 2951345012U;
int var_22 = 892867417;
unsigned int arr_3 [20] [20] ;
short arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 3673683886U : 3630086287U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)32139 : (short)-14353;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
