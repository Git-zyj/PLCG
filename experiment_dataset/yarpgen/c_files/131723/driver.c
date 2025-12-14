#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31152;
signed char var_2 = (signed char)-46;
short var_3 = (short)-28504;
int var_4 = -272608420;
short var_5 = (short)-30469;
int var_6 = 1440841191;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-28;
int zero = 0;
int var_10 = 1383983971;
signed char var_11 = (signed char)-40;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)107;
short arr_1 [24] ;
int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)26108 : (short)18987;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 91525710 : 364258440;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
