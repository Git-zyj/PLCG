#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1393235959U;
unsigned int var_8 = 2990108542U;
signed char var_13 = (signed char)105;
int var_16 = 1075785600;
int var_17 = -241466489;
int zero = 0;
unsigned long long int var_19 = 7749772576933553340ULL;
int var_20 = -480609356;
int var_21 = 926731010;
signed char var_22 = (signed char)75;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)43047;
unsigned long long int arr_1 [24] [24] ;
_Bool arr_2 [24] ;
int arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 7751295159683917964ULL : 16765384754950663493ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -474269340 : -1524713560;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
