#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 710894479U;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)91;
long long int var_7 = 6509345375743795887LL;
unsigned char var_8 = (unsigned char)109;
long long int var_9 = -7326975296809729911LL;
long long int var_10 = 5085134162729466510LL;
unsigned short var_11 = (unsigned short)50499;
unsigned int var_12 = 4247099170U;
unsigned char var_14 = (unsigned char)198;
int zero = 0;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 6299951371365473614ULL;
_Bool var_20 = (_Bool)1;
int var_21 = 1346772448;
int var_22 = -132971665;
_Bool arr_0 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
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
