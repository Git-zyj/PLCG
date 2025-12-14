#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2667448517U;
short var_4 = (short)-24617;
int zero = 0;
unsigned int var_16 = 1571099475U;
int var_17 = -1872759379;
int var_18 = -821029267;
unsigned long long int var_19 = 7082195259650867776ULL;
_Bool var_20 = (_Bool)0;
long long int arr_0 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 1154384470368862627LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
