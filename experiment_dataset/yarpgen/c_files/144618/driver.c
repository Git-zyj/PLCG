#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)158;
unsigned long long int var_9 = 1436489746677346849ULL;
int var_12 = 601210384;
int var_13 = -1816500961;
int zero = 0;
int var_14 = -1991136783;
unsigned int var_15 = 807799375U;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)73;
int arr_7 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = 1805174988;
}

void checksum() {
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
