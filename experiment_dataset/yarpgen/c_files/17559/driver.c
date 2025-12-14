#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14670450325971395474ULL;
_Bool var_7 = (_Bool)0;
signed char var_12 = (signed char)-101;
signed char var_14 = (signed char)-91;
unsigned long long int var_16 = 4593058457350172285ULL;
unsigned short var_17 = (unsigned short)5297;
int zero = 0;
unsigned long long int var_18 = 14055554684238611196ULL;
unsigned int var_19 = 2790562859U;
unsigned long long int var_20 = 13406058671655823585ULL;
unsigned char arr_1 [21] ;
unsigned char arr_3 [21] ;
_Bool arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned char)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
