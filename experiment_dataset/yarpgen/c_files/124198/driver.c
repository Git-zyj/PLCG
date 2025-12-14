#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15570152565642372520ULL;
short var_4 = (short)21635;
long long int var_6 = 1736651333916493187LL;
short var_7 = (short)-14087;
unsigned int var_8 = 1078819066U;
unsigned int var_11 = 2257959716U;
int zero = 0;
long long int var_13 = -3504978333170331007LL;
unsigned short var_14 = (unsigned short)36717;
unsigned short var_15 = (unsigned short)19163;
unsigned int var_16 = 3235851278U;
unsigned long long int var_17 = 12091763125779546609ULL;
unsigned int var_18 = 4001327443U;
signed char arr_2 [12] [12] [12] ;
unsigned short arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)46;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)62382 : (unsigned short)47660;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
