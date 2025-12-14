#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)245;
unsigned long long int var_1 = 10258144545656023519ULL;
unsigned char var_5 = (unsigned char)160;
long long int var_6 = -2009365987132252068LL;
signed char var_7 = (signed char)-71;
unsigned long long int var_10 = 12023625653135932774ULL;
unsigned long long int var_11 = 9185723357988414051ULL;
long long int var_12 = -1213936759771642698LL;
int zero = 0;
unsigned int var_13 = 861110992U;
short var_14 = (short)-64;
unsigned int var_15 = 528023235U;
unsigned char var_16 = (unsigned char)35;
signed char var_17 = (signed char)117;
unsigned int var_18 = 2470734488U;
unsigned long long int arr_1 [11] ;
_Bool arr_2 [11] [11] ;
unsigned char arr_5 [11] ;
_Bool arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 3787201612810248220ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
