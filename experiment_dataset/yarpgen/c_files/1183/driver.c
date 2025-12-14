#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15925511010555359078ULL;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)9610;
unsigned short var_4 = (unsigned short)23764;
signed char var_5 = (signed char)-126;
short var_6 = (short)-15450;
short var_7 = (short)-7642;
unsigned long long int var_8 = 7630635052724718818ULL;
short var_9 = (short)29234;
signed char var_11 = (signed char)-121;
unsigned int var_12 = 1294857417U;
short var_14 = (short)16601;
signed char var_16 = (signed char)47;
int zero = 0;
unsigned char var_17 = (unsigned char)91;
unsigned char var_18 = (unsigned char)227;
unsigned long long int var_19 = 3806073768454844075ULL;
unsigned int var_20 = 455124674U;
unsigned char var_21 = (unsigned char)77;
_Bool var_22 = (_Bool)1;
short var_23 = (short)6881;
unsigned int arr_0 [15] ;
unsigned int arr_2 [15] ;
unsigned char arr_4 [15] ;
unsigned int arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 3878514U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 3499409460U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned char)91;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 1950125883U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
