#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21601;
short var_1 = (short)23814;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 143893945498759668ULL;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
long long int var_7 = 1529595400087058781LL;
unsigned long long int var_8 = 12051391672535860252ULL;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 4030260647U;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)16895;
int var_14 = -190823190;
long long int var_15 = 1744840968405650409LL;
unsigned int var_16 = 3257482277U;
short var_17 = (short)-23408;
int var_18 = 337292297;
int var_19 = 790506762;
short var_20 = (short)25124;
short arr_3 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)15410;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
