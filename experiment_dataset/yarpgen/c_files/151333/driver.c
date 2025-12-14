#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)99;
unsigned char var_11 = (unsigned char)218;
unsigned char var_12 = (unsigned char)166;
unsigned int var_13 = 189097692U;
long long int var_14 = 6697374368844001406LL;
int zero = 0;
long long int var_20 = 3555965091325952763LL;
_Bool var_21 = (_Bool)1;
short var_22 = (short)155;
unsigned int var_23 = 4122051739U;
long long int var_24 = 5727292226569722334LL;
short var_25 = (short)-1462;
_Bool arr_1 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
