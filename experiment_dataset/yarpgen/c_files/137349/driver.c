#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_3 = 1990653738;
long long int var_6 = -2456946485086128219LL;
signed char var_7 = (signed char)2;
short var_9 = (short)10080;
_Bool var_10 = (_Bool)1;
unsigned char var_12 = (unsigned char)25;
unsigned short var_13 = (unsigned short)25893;
int zero = 0;
unsigned short var_19 = (unsigned short)63827;
long long int var_20 = -4655718530477778479LL;
unsigned int var_21 = 2748993713U;
unsigned int var_22 = 3877600969U;
unsigned int var_23 = 4152744272U;
unsigned long long int var_24 = 4464480990365515844ULL;
unsigned int var_25 = 2004503257U;
unsigned char var_26 = (unsigned char)246;
int var_27 = -1313473894;
long long int arr_1 [12] [12] ;
int arr_5 [12] [12] [12] ;
unsigned long long int arr_10 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 4229618434222911813LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 960623265;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 5215473185452683834ULL : 13567205573429250919ULL;
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
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
