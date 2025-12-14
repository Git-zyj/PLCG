#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1598495914U;
long long int var_3 = 129459952555018848LL;
short var_7 = (short)30019;
_Bool var_8 = (_Bool)1;
long long int var_9 = -742711168784869417LL;
int zero = 0;
unsigned int var_11 = 2561503840U;
long long int var_12 = -5256214116192199264LL;
_Bool var_13 = (_Bool)0;
long long int var_14 = -9110490541936077905LL;
_Bool arr_0 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
