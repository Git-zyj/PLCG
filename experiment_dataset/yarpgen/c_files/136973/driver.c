#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5848031600903705272LL;
short var_2 = (short)-11157;
unsigned char var_3 = (unsigned char)148;
int var_4 = -548154243;
_Bool var_6 = (_Bool)1;
unsigned char var_8 = (unsigned char)169;
unsigned int var_10 = 3806168054U;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 8701874331307592594ULL;
unsigned char var_15 = (unsigned char)234;
short var_16 = (short)22341;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 9990677022988238968ULL;
int var_20 = -1374720392;
unsigned int var_21 = 3419435893U;
unsigned char arr_0 [16] [16] ;
short arr_1 [16] ;
unsigned short arr_4 [20] ;
unsigned long long int arr_5 [20] [20] ;
unsigned long long int arr_6 [20] [20] ;
short arr_3 [16] ;
signed char arr_7 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)142 : (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)8823 : (short)-9432;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (unsigned short)52206;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = 6987638937130309939ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = 5692310302759028426ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-24822 : (short)-6951;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (signed char)79;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
