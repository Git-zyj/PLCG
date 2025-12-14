#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)46;
signed char var_2 = (signed char)58;
unsigned char var_3 = (unsigned char)80;
short var_4 = (short)22288;
short var_5 = (short)-22276;
unsigned char var_7 = (unsigned char)165;
unsigned long long int var_11 = 4885745269569464912ULL;
unsigned char var_12 = (unsigned char)44;
int zero = 0;
unsigned int var_15 = 2887274986U;
unsigned int var_16 = 3363205131U;
int var_17 = 407215050;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 17689924318533296761ULL;
long long int var_20 = 6135274378554825100LL;
long long int var_21 = 99496366890131297LL;
short var_22 = (short)23672;
unsigned char arr_0 [14] ;
long long int arr_1 [14] ;
unsigned short arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 7736669359198069247LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned short)14702;
}

void checksum() {
    hash(&seed, var_15);
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
