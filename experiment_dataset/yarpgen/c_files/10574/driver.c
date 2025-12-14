#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47392;
int var_1 = 549189491;
int var_4 = 815160191;
unsigned long long int var_6 = 11858683311093151986ULL;
unsigned char var_9 = (unsigned char)210;
unsigned long long int var_10 = 11407058329353095268ULL;
unsigned long long int var_11 = 3264030426857417052ULL;
unsigned int var_12 = 3665123665U;
short var_16 = (short)30478;
unsigned short var_17 = (unsigned short)13691;
int zero = 0;
unsigned long long int var_18 = 10919177723494777956ULL;
unsigned char var_19 = (unsigned char)24;
signed char var_20 = (signed char)96;
_Bool var_21 = (_Bool)0;
short arr_0 [11] ;
unsigned short arr_2 [11] ;
unsigned short arr_5 [11] ;
long long int arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (short)-26579;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)35640;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)43517 : (unsigned short)13864;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -401196370932948444LL : -7470750770161745122LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
