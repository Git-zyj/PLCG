#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7798811481006310329LL;
unsigned int var_7 = 907247211U;
int var_11 = -1229024456;
short var_13 = (short)22624;
int zero = 0;
unsigned int var_15 = 4018985736U;
unsigned int var_16 = 1379911651U;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 4177063709U;
short arr_0 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)10522;
}

void checksum() {
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
