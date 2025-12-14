#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 1964034108236505246ULL;
unsigned char var_12 = (unsigned char)184;
unsigned short var_14 = (unsigned short)54608;
int zero = 0;
unsigned int var_15 = 3170559521U;
unsigned char var_16 = (unsigned char)58;
unsigned short var_17 = (unsigned short)7976;
long long int var_18 = -3241497988085395791LL;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 2836290210U;
long long int arr_1 [12] ;
long long int arr_2 [12] ;
long long int arr_5 [12] ;
short arr_6 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = -3884305878523965088LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = -327216812866173541LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 1732603270578528553LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)12966;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
