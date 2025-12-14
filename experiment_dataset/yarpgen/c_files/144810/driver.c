#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7571230471555276317LL;
long long int var_3 = -419992037535379775LL;
long long int var_10 = 7345866750557108866LL;
int zero = 0;
long long int var_12 = -2030964622373002636LL;
long long int var_13 = 628824162957338674LL;
long long int var_14 = 7770787827222029964LL;
long long int var_15 = 6551358928116994248LL;
long long int arr_0 [24] ;
long long int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -7452772554388428280LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 8634227984978589347LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
