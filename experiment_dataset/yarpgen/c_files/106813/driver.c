#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)8756;
signed char var_7 = (signed char)65;
int var_8 = 89572405;
int var_10 = 4412898;
int zero = 0;
unsigned long long int var_18 = 1603972953131717661ULL;
unsigned char var_19 = (unsigned char)189;
short var_20 = (short)28371;
unsigned short var_21 = (unsigned short)11691;
unsigned int var_22 = 3073014063U;
unsigned short var_23 = (unsigned short)22906;
unsigned short var_24 = (unsigned short)59883;
int var_25 = -1709273207;
unsigned char var_26 = (unsigned char)162;
unsigned int var_27 = 526939083U;
int var_28 = 491131310;
unsigned int arr_0 [19] ;
short arr_1 [19] [19] ;
_Bool arr_2 [18] ;
short arr_3 [18] ;
_Bool arr_6 [22] ;
unsigned char arr_9 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 999148566U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (short)3567;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (short)16115;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (unsigned char)71;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
