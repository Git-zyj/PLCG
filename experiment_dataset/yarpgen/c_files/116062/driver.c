#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)234;
unsigned int var_6 = 1009585224U;
unsigned int var_11 = 1069764556U;
unsigned int var_13 = 399557245U;
int var_14 = 1825451980;
int zero = 0;
short var_17 = (short)-12569;
unsigned char var_18 = (unsigned char)71;
_Bool var_19 = (_Bool)1;
short var_20 = (short)19479;
_Bool var_21 = (_Bool)0;
long long int var_22 = -6092039770311689076LL;
unsigned int arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1308448124U : 3678289552U;
}

void checksum() {
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
