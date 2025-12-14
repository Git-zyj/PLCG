#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)11;
unsigned long long int var_1 = 13327838422878117044ULL;
unsigned short var_2 = (unsigned short)63530;
long long int var_5 = 6875377028107382609LL;
unsigned int var_8 = 1497226759U;
short var_10 = (short)5146;
long long int var_13 = -1374544600888605760LL;
int zero = 0;
long long int var_14 = -1455151355110785861LL;
int var_15 = 1706275158;
int var_16 = 661002112;
int var_17 = -1797722196;
int var_18 = -902734429;
short arr_1 [21] ;
short arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)-29147;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (short)-22633;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
