#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 7929996336016064545ULL;
int zero = 0;
unsigned long long int var_11 = 4661586161254841696ULL;
unsigned char var_12 = (unsigned char)190;
short var_13 = (short)-9314;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-65;
unsigned char var_16 = (unsigned char)96;
unsigned char arr_0 [12] [12] ;
signed char arr_6 [20] ;
_Bool arr_12 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)116;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (signed char)-94;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
