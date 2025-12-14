#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -696723455;
short var_1 = (short)26734;
int var_6 = 6880264;
short var_12 = (short)1753;
unsigned short var_13 = (unsigned short)4580;
unsigned int var_14 = 1652110813U;
unsigned long long int var_15 = 13048366813890277107ULL;
unsigned long long int var_16 = 10202948221332590501ULL;
unsigned int var_17 = 763779050U;
unsigned int var_18 = 724747903U;
int zero = 0;
unsigned short var_19 = (unsigned short)8802;
signed char var_20 = (signed char)-116;
unsigned short var_21 = (unsigned short)4213;
unsigned short var_22 = (unsigned short)33129;
short var_23 = (short)13230;
unsigned int var_24 = 3672590591U;
int var_25 = 868813242;
int arr_2 [12] ;
unsigned short arr_3 [12] ;
unsigned short arr_4 [12] [12] ;
short arr_5 [12] [12] ;
int arr_6 [12] ;
unsigned long long int arr_12 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = -18286207;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)55340;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)53601;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (short)4025;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = -1842479598;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 117139494839042018ULL : 6637535054544483316ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
