#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = -1105262538;
unsigned long long int var_3 = 14969965313445139726ULL;
short var_4 = (short)30850;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)0;
short var_10 = (short)28060;
signed char var_13 = (signed char)11;
int zero = 0;
unsigned long long int var_14 = 10682871203992253751ULL;
int var_15 = 1177463256;
unsigned char var_16 = (unsigned char)212;
int var_17 = -2127560985;
_Bool var_18 = (_Bool)0;
unsigned long long int arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 4823631703042354827ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
