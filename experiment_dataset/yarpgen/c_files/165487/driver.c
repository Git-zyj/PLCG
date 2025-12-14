#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29457;
unsigned int var_2 = 2767769686U;
unsigned short var_3 = (unsigned short)62078;
short var_7 = (short)-12923;
_Bool var_8 = (_Bool)0;
short var_9 = (short)122;
unsigned short var_10 = (unsigned short)40661;
short var_11 = (short)30923;
unsigned long long int var_12 = 5526375044968153309ULL;
short var_15 = (short)-11568;
int zero = 0;
signed char var_19 = (signed char)-16;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-7218;
int var_22 = -13512200;
unsigned long long int arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 12789247939274072733ULL;
}

void checksum() {
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
