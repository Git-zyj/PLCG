#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 275143336U;
long long int var_6 = 8990271350556092227LL;
signed char var_11 = (signed char)112;
unsigned long long int var_15 = 15368735740853324189ULL;
short var_19 = (short)20888;
int zero = 0;
int var_20 = -1170697749;
unsigned int var_21 = 3839015735U;
unsigned char var_22 = (unsigned char)71;
unsigned short var_23 = (unsigned short)59241;
unsigned int var_24 = 2880269831U;
unsigned char var_25 = (unsigned char)216;
unsigned int arr_0 [25] [25] ;
_Bool arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 2498278232U : 795088553U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
