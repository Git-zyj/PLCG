#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1358454655;
_Bool var_3 = (_Bool)0;
short var_4 = (short)-9701;
short var_7 = (short)-20668;
int var_8 = -1802968285;
short var_9 = (short)30262;
short var_10 = (short)-24423;
unsigned char var_11 = (unsigned char)53;
unsigned char var_14 = (unsigned char)244;
int zero = 0;
unsigned int var_15 = 1626550981U;
short var_16 = (short)-16895;
unsigned short var_17 = (unsigned short)7528;
int var_18 = -678332853;
short arr_1 [18] ;
signed char arr_4 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (short)-23721;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)108;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
