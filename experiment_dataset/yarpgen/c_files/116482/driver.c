#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)28;
short var_1 = (short)13143;
_Bool var_2 = (_Bool)0;
int var_3 = -1745659455;
int var_4 = -569955534;
signed char var_6 = (signed char)109;
unsigned int var_8 = 223531639U;
unsigned char var_9 = (unsigned char)26;
short var_11 = (short)-32245;
unsigned int var_12 = 1075004043U;
int zero = 0;
int var_13 = 453820968;
_Bool var_14 = (_Bool)1;
int var_15 = 1333429162;
unsigned char var_16 = (unsigned char)148;
int var_17 = -1931984046;
unsigned short arr_0 [24] ;
unsigned long long int arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)65411;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 9430670650509765937ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
