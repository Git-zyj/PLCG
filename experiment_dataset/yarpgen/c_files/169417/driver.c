#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1828107135;
signed char var_4 = (signed char)-64;
long long int var_11 = 3285527727234687287LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_19 = -3863989908730598145LL;
long long int var_20 = -7490940905582254923LL;
unsigned long long int var_21 = 9136290162941648018ULL;
unsigned long long int arr_0 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 7538007298465116081ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
