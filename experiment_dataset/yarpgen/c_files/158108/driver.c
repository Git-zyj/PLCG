#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4433127459128248007LL;
unsigned int var_2 = 845471869U;
unsigned char var_3 = (unsigned char)135;
signed char var_4 = (signed char)66;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 8892607528969678679ULL;
int var_10 = 1396322879;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-17538;
unsigned long long int var_13 = 874168025896297896ULL;
int var_16 = 1265793193;
int zero = 0;
unsigned char var_17 = (unsigned char)40;
unsigned short var_18 = (unsigned short)28707;
unsigned short var_19 = (unsigned short)61712;
signed char var_20 = (signed char)62;
unsigned short var_21 = (unsigned short)17642;
signed char var_22 = (signed char)51;
unsigned long long int arr_2 [15] ;
unsigned long long int arr_3 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 4690827491331744703ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = 13265727197843997875ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
