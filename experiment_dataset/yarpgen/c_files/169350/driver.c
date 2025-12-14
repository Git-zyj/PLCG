#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8461655954539605081ULL;
unsigned int var_3 = 3308177748U;
short var_7 = (short)-30196;
signed char var_8 = (signed char)12;
_Bool var_11 = (_Bool)1;
unsigned int var_13 = 1259270846U;
int zero = 0;
unsigned short var_15 = (unsigned short)14453;
unsigned char var_16 = (unsigned char)104;
unsigned short var_17 = (unsigned short)21041;
unsigned short var_18 = (unsigned short)54689;
unsigned int var_19 = 1596661425U;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 562293906833969414ULL;
unsigned long long int arr_0 [11] ;
unsigned short arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 13598381849144652766ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)27059;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
