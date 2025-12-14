#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_3 = -6092373525669205537LL;
unsigned char var_5 = (unsigned char)58;
unsigned short var_6 = (unsigned short)25978;
unsigned short var_7 = (unsigned short)61207;
unsigned short var_8 = (unsigned short)51988;
signed char var_9 = (signed char)72;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_15 = 4247106090U;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)27;
unsigned char var_19 = (unsigned char)233;
unsigned char var_20 = (unsigned char)6;
signed char arr_3 [12] ;
unsigned char arr_10 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)73 : (signed char)48;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (unsigned char)136;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
