#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12018014587103532623ULL;
signed char var_3 = (signed char)-56;
unsigned short var_10 = (unsigned short)30227;
long long int var_13 = 5337237098306982636LL;
unsigned long long int var_16 = 1065115316564140302ULL;
short var_17 = (short)-1645;
int zero = 0;
signed char var_19 = (signed char)40;
unsigned short var_20 = (unsigned short)48217;
unsigned short var_21 = (unsigned short)15179;
unsigned int var_22 = 2128029076U;
short arr_6 [18] [18] [18] ;
_Bool arr_8 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)-22677;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
