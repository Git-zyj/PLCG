#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-75;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-85;
signed char var_5 = (signed char)78;
unsigned int var_6 = 1192891787U;
signed char var_7 = (signed char)81;
short var_9 = (short)2660;
int zero = 0;
int var_10 = 256282697;
short var_11 = (short)-29431;
short var_12 = (short)-15992;
short var_13 = (short)-28013;
unsigned int var_14 = 1178192780U;
unsigned int var_15 = 4277577471U;
unsigned short var_16 = (unsigned short)26947;
short var_17 = (short)-26116;
int var_18 = -1497872073;
int var_19 = -956737600;
int var_20 = -1322679805;
unsigned int arr_0 [12] ;
int arr_3 [21] ;
long long int arr_4 [21] ;
long long int arr_5 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 888004246U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 2173992 : -1161257537;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = -6603688412040569014LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = -4280020202903931147LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
