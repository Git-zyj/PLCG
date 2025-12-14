#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_2 = 1326701575;
long long int var_4 = 7626287620760444926LL;
_Bool var_5 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)8802;
int var_17 = -2054042326;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)24605;
long long int var_20 = 163429992501059732LL;
unsigned int var_21 = 3329077444U;
int arr_2 [14] ;
signed char arr_6 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 65868781;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (signed char)-16;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
