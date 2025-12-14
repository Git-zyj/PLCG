#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1539480187U;
unsigned int var_3 = 2156885068U;
long long int var_4 = -7049771863932787261LL;
unsigned long long int var_6 = 16965419132847002397ULL;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 2175255669U;
signed char var_11 = (signed char)81;
signed char var_13 = (signed char)72;
unsigned int var_16 = 1359781271U;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 3236568467U;
short var_20 = (short)-7593;
int var_21 = 986022547;
int arr_0 [23] [23] ;
unsigned int arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 1465984823 : 1396513374;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 728126145U : 2993476676U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
