#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -9001780350978949974LL;
unsigned int var_5 = 965289447U;
int zero = 0;
int var_10 = -1828059472;
signed char var_11 = (signed char)-35;
short var_12 = (short)-4876;
long long int var_13 = 7718526163714666524LL;
long long int var_14 = 3472169362037421961LL;
int var_15 = -469318272;
_Bool arr_0 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
