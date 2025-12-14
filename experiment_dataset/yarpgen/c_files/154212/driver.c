#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 11536297202724385LL;
short var_1 = (short)-31689;
long long int var_2 = -1774265759588627534LL;
unsigned int var_3 = 271226478U;
unsigned long long int var_4 = 15406707752904259828ULL;
_Bool var_6 = (_Bool)0;
long long int var_7 = -7539624740075317898LL;
short var_8 = (short)-16570;
short var_10 = (short)13734;
unsigned char var_11 = (unsigned char)116;
int var_13 = 1920118586;
unsigned char var_14 = (unsigned char)5;
unsigned long long int var_15 = 6033207539050687123ULL;
short var_19 = (short)-26632;
int zero = 0;
short var_20 = (short)15712;
unsigned int var_21 = 2913626237U;
short arr_4 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-3890;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
