#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 534221785;
short var_1 = (short)-2131;
int var_2 = -368719258;
unsigned short var_6 = (unsigned short)33405;
unsigned short var_7 = (unsigned short)29804;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 9626901168537811418ULL;
unsigned short var_12 = (unsigned short)25294;
int zero = 0;
unsigned char var_16 = (unsigned char)132;
signed char var_17 = (signed char)-36;
unsigned int arr_6 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = 4148909598U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
