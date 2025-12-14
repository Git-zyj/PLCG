#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)20475;
_Bool var_2 = (_Bool)0;
int var_3 = -630388181;
int var_4 = -1924427811;
int var_5 = 2021987820;
unsigned short var_6 = (unsigned short)7308;
short var_8 = (short)-8093;
short var_9 = (short)28461;
unsigned int var_10 = 3663837900U;
int var_11 = -1691656519;
signed char var_13 = (signed char)13;
signed char var_14 = (signed char)9;
int zero = 0;
unsigned short var_15 = (unsigned short)59289;
unsigned short var_16 = (unsigned short)45515;
int var_17 = 92358740;
long long int var_18 = 7711111390484997870LL;
short var_19 = (short)21222;
unsigned int var_20 = 3601749047U;
signed char arr_5 [11] ;
unsigned short arr_7 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)85 : (signed char)23;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)53761 : (unsigned short)29150;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_7 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
