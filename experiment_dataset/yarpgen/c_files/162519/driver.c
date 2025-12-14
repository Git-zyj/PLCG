#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24862;
short var_4 = (short)19109;
unsigned int var_5 = 2948416806U;
long long int var_7 = -6517320227614917885LL;
unsigned char var_8 = (unsigned char)110;
unsigned char var_9 = (unsigned char)48;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)116;
short var_14 = (short)19254;
int zero = 0;
short var_20 = (short)-18126;
unsigned char var_21 = (unsigned char)42;
unsigned char var_22 = (unsigned char)54;
long long int var_23 = 744058166012480145LL;
short var_24 = (short)-1294;
unsigned short var_25 = (unsigned short)25987;
long long int var_26 = 2454601512224584477LL;
unsigned char var_27 = (unsigned char)160;
short arr_0 [12] ;
signed char arr_1 [12] ;
short arr_3 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (short)12212;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)-99;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-1247 : (short)30304;
}

void checksum() {
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
