#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50320;
long long int var_2 = 1901924089459262901LL;
short var_7 = (short)19654;
unsigned short var_11 = (unsigned short)61733;
signed char var_13 = (signed char)53;
unsigned int var_14 = 1831861264U;
unsigned char var_15 = (unsigned char)113;
int zero = 0;
unsigned short var_17 = (unsigned short)2693;
signed char var_18 = (signed char)-36;
unsigned long long int var_19 = 8374266136709991166ULL;
unsigned int var_20 = 2083760869U;
short var_21 = (short)12694;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-4936;
unsigned short var_24 = (unsigned short)27281;
unsigned short arr_1 [18] [18] ;
_Bool arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)42512;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
