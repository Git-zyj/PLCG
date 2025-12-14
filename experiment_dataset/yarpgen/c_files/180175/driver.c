#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 912393732;
_Bool var_11 = (_Bool)0;
unsigned short var_13 = (unsigned short)14108;
_Bool var_15 = (_Bool)1;
int zero = 0;
int var_16 = -278425101;
unsigned char var_17 = (unsigned char)205;
unsigned char var_18 = (unsigned char)248;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
int var_21 = 812612626;
_Bool var_22 = (_Bool)0;
unsigned char arr_0 [23] ;
signed char arr_1 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)160 : (unsigned char)205;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)-58 : (signed char)-93;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
