#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-50;
signed char var_1 = (signed char)56;
unsigned int var_4 = 304729917U;
short var_6 = (short)-22907;
short var_7 = (short)-7816;
long long int var_8 = 4447901080584581433LL;
signed char var_9 = (signed char)59;
signed char var_12 = (signed char)113;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)33;
unsigned long long int var_15 = 5430845087351824303ULL;
unsigned int var_16 = 2234547009U;
_Bool var_17 = (_Bool)1;
unsigned long long int arr_0 [13] ;
short arr_1 [13] ;
long long int arr_2 [13] [13] ;
_Bool arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 4923452303537950937ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (short)-12765;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = -8246455204648022418LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
