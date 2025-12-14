#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)12;
unsigned char var_7 = (unsigned char)198;
unsigned short var_12 = (unsigned short)31100;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)80;
int var_17 = -1258904863;
unsigned int var_18 = 3694990883U;
long long int var_19 = -5326930981212653606LL;
unsigned char var_20 = (unsigned char)112;
unsigned char var_21 = (unsigned char)73;
unsigned char arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned char)159;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
