#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)93;
signed char var_2 = (signed char)87;
int var_3 = 2053299980;
signed char var_5 = (signed char)66;
signed char var_6 = (signed char)-120;
unsigned short var_7 = (unsigned short)49174;
int zero = 0;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)45;
unsigned long long int var_15 = 3285583676929084249ULL;
unsigned int var_16 = 2373282724U;
signed char var_17 = (signed char)92;
signed char var_18 = (signed char)99;
unsigned short arr_2 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)53415;
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
