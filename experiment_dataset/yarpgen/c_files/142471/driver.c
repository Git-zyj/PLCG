#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 4189768945U;
long long int var_11 = -4917871335421694232LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-2704;
unsigned int var_15 = 2299314101U;
unsigned int var_16 = 3196925159U;
unsigned long long int arr_0 [25] ;
long long int arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 1292155402983762709ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 6742895231316469168LL;
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
