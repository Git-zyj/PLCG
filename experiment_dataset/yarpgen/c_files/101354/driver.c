#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)39742;
_Bool var_6 = (_Bool)0;
short var_8 = (short)1473;
short var_10 = (short)11070;
unsigned short var_13 = (unsigned short)44308;
signed char var_15 = (signed char)35;
short var_16 = (short)-15929;
int zero = 0;
unsigned short var_17 = (unsigned short)11481;
unsigned char var_18 = (unsigned char)208;
unsigned long long int var_19 = 9093062040278595640ULL;
unsigned short var_20 = (unsigned short)9150;
short arr_0 [10] ;
unsigned short arr_1 [10] ;
short arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)-31147;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)18427;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (short)-18731;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
