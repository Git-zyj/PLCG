#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -172959102;
int var_1 = 1844220319;
unsigned int var_4 = 2278717747U;
short var_5 = (short)3069;
short var_6 = (short)-23689;
short var_7 = (short)-14424;
int var_8 = -790709048;
short var_9 = (short)18936;
unsigned short var_10 = (unsigned short)14048;
_Bool var_11 = (_Bool)0;
short var_13 = (short)6227;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2321752471U;
int zero = 0;
int var_17 = -1012637735;
unsigned int var_18 = 2901021345U;
int var_19 = -585640495;
unsigned char var_20 = (unsigned char)237;
unsigned int var_21 = 3361992086U;
int var_22 = 379241718;
unsigned char var_23 = (unsigned char)150;
signed char var_24 = (signed char)29;
unsigned char arr_2 [15] [15] ;
unsigned int arr_4 [18] ;
short arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)243;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 2293818993U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (short)-21659;
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
