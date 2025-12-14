#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -106486688;
int var_4 = -138103621;
long long int var_5 = 8375541691874703054LL;
_Bool var_8 = (_Bool)0;
long long int var_9 = 5308236141334140023LL;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)170;
unsigned char var_13 = (unsigned char)112;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)252;
unsigned char var_16 = (unsigned char)232;
int var_17 = 1161215070;
unsigned char var_18 = (unsigned char)17;
unsigned char arr_1 [13] ;
long long int arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 5866032401824911977LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
