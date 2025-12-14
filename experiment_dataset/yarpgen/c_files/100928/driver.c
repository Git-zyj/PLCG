#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2342936748372786349ULL;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 4100189488429080484ULL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 6395115044927249510ULL;
unsigned long long int var_9 = 15764327555085755437ULL;
unsigned long long int var_12 = 15334445213849504474ULL;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 16741579659216008132ULL;
unsigned int var_21 = 2945970534U;
long long int var_22 = -820017480394071327LL;
unsigned long long int var_23 = 9912894545069595117ULL;
long long int arr_8 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = -6748984155929280746LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
