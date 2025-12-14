#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)71;
short var_2 = (short)18811;
unsigned short var_3 = (unsigned short)28569;
unsigned int var_4 = 1862560652U;
unsigned short var_5 = (unsigned short)25550;
short var_7 = (short)-9888;
unsigned long long int var_8 = 7326400802848201664ULL;
signed char var_10 = (signed char)94;
int var_11 = -1167806802;
short var_12 = (short)-26216;
int zero = 0;
long long int var_14 = 4778379903004619801LL;
signed char var_15 = (signed char)35;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-125;
unsigned int var_18 = 1583658211U;
unsigned short var_19 = (unsigned short)51312;
short var_20 = (short)1449;
signed char var_21 = (signed char)-51;
_Bool arr_1 [12] ;
_Bool arr_3 [12] [12] ;
unsigned long long int arr_4 [12] [12] ;
_Bool arr_5 [12] [12] ;
unsigned short arr_6 [12] [12] [12] ;
long long int arr_7 [12] [12] ;
unsigned long long int arr_9 [12] ;
signed char arr_10 [12] ;
short arr_12 [12] ;
unsigned short arr_2 [12] ;
int arr_13 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 5012170912231398184ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)48116;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = 8541086505231935725LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = 4893610606429266216ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (signed char)-33;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (short)-15860;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned short)6031;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = 1035681559;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
