#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)65327;
unsigned short var_4 = (unsigned short)44231;
short var_5 = (short)10107;
long long int var_6 = -6178401969440108730LL;
long long int var_10 = 6361959300365234303LL;
short var_12 = (short)-19477;
short var_13 = (short)21357;
int zero = 0;
signed char var_14 = (signed char)45;
signed char var_15 = (signed char)-1;
unsigned short var_16 = (unsigned short)34895;
unsigned short var_17 = (unsigned short)39641;
short var_18 = (short)16592;
signed char var_19 = (signed char)-123;
long long int var_20 = -7172539205254229253LL;
signed char var_21 = (signed char)-80;
signed char arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)115 : (signed char)-23;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
