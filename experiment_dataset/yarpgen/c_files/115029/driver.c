#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 643607260U;
long long int var_3 = -7503875403366077463LL;
unsigned int var_5 = 155741167U;
unsigned int var_6 = 824278415U;
int zero = 0;
_Bool var_12 = (_Bool)0;
long long int var_13 = -4674225102024565331LL;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 3099941768U;
long long int var_16 = -1767657404228097653LL;
long long int arr_0 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = -6505453186249894422LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
