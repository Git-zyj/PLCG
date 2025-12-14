#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)166;
int var_2 = 1837779205;
unsigned short var_7 = (unsigned short)6603;
signed char var_8 = (signed char)105;
int zero = 0;
long long int var_12 = -661263852915979610LL;
short var_13 = (short)16934;
unsigned int var_14 = 2118529709U;
short var_15 = (short)-25435;
unsigned int var_16 = 1538052564U;
unsigned int arr_3 [15] [15] ;
_Bool arr_8 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = 3185487613U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
}

void checksum() {
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
