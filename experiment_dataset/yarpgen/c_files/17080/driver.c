#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)9131;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned short var_12 = (unsigned short)9022;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 1102653595U;
unsigned short var_21 = (unsigned short)3945;
unsigned char var_22 = (unsigned char)29;
_Bool var_23 = (_Bool)1;
unsigned int arr_0 [11] ;
unsigned short arr_1 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 2643513381U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned short)8839;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
