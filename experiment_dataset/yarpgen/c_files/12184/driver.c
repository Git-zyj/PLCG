#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-1170;
short var_3 = (short)15571;
unsigned short var_4 = (unsigned short)16423;
short var_6 = (short)-575;
short var_7 = (short)-24273;
signed char var_8 = (signed char)64;
int var_9 = 1730874293;
unsigned short var_12 = (unsigned short)46765;
signed char var_13 = (signed char)123;
unsigned short var_15 = (unsigned short)28628;
long long int var_17 = -4833857344838859230LL;
int zero = 0;
int var_18 = 1517333455;
int var_19 = -1084739265;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)48226;
unsigned short var_22 = (unsigned short)4469;
int var_23 = -1697729761;
short var_24 = (short)-17720;
unsigned long long int var_25 = 4650952960025505698ULL;
short var_26 = (short)23546;
unsigned int arr_0 [13] ;
short arr_1 [13] ;
unsigned short arr_2 [25] ;
short arr_6 [23] ;
unsigned long long int arr_7 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 3968815160U : 3052194712U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (short)11423;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)51097;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)8299 : (short)24114;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 3279590621534240838ULL : 7226124473333691405ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
