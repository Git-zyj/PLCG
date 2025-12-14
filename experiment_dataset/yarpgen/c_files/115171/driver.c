#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1368812969;
int var_6 = -493713534;
unsigned int var_8 = 2614109032U;
int var_11 = 1523708048;
int zero = 0;
unsigned short var_13 = (unsigned short)21813;
_Bool var_14 = (_Bool)0;
long long int var_15 = -9005003462321720718LL;
short var_16 = (short)-24944;
unsigned char var_17 = (unsigned char)210;
signed char arr_1 [24] ;
signed char arr_8 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)39;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (signed char)-83;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
