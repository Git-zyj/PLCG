#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)10155;
unsigned int var_2 = 514645967U;
unsigned short var_3 = (unsigned short)51176;
int var_4 = 369465124;
_Bool var_5 = (_Bool)0;
short var_6 = (short)-18861;
signed char var_7 = (signed char)-95;
unsigned long long int var_10 = 17273586380706072727ULL;
unsigned short var_11 = (unsigned short)13995;
int zero = 0;
unsigned short var_12 = (unsigned short)50871;
unsigned int var_13 = 3066564830U;
unsigned short var_14 = (unsigned short)21135;
int var_15 = 479971847;
short var_16 = (short)3488;
signed char var_17 = (signed char)32;
signed char var_18 = (signed char)-117;
short arr_3 [19] [19] ;
_Bool arr_11 [19] ;
short arr_15 [19] ;
unsigned int arr_16 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-31163;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = (short)13258;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = 2341527543U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
