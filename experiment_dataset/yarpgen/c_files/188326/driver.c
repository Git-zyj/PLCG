#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1690932808;
signed char var_2 = (signed char)-47;
long long int var_3 = -4566236549486469112LL;
unsigned int var_8 = 1364413089U;
unsigned short var_11 = (unsigned short)31145;
long long int var_15 = 8792676924003744868LL;
unsigned int var_17 = 2417825176U;
short var_18 = (short)-21104;
int zero = 0;
unsigned short var_19 = (unsigned short)1966;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)59;
int var_22 = -705585300;
signed char var_23 = (signed char)25;
_Bool var_24 = (_Bool)1;
int var_25 = -1469253068;
int var_26 = 1770461928;
_Bool arr_1 [25] ;
int arr_3 [25] [25] [25] ;
long long int arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1907421889;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = -2638111724448429682LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
