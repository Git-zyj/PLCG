#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9282;
int var_1 = 953532096;
unsigned short var_2 = (unsigned short)2454;
int var_4 = -2091201665;
short var_5 = (short)-5034;
short var_6 = (short)-4491;
unsigned short var_7 = (unsigned short)8545;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)105;
unsigned int var_13 = 4061466741U;
int var_14 = -1385501668;
unsigned int var_15 = 2517888574U;
_Bool var_16 = (_Bool)0;
long long int arr_1 [10] ;
unsigned int arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 2956809432693352513LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 3356637625U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
