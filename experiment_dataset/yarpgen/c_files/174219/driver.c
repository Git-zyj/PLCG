#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 82151257403776294ULL;
unsigned long long int var_5 = 3519327405800061956ULL;
unsigned long long int var_6 = 16539987573899865453ULL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_12 = 1736796294032063390ULL;
int zero = 0;
unsigned long long int var_17 = 287962731547037662ULL;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 7652596256337865400ULL;
_Bool var_20 = (_Bool)0;
unsigned long long int arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 18370060642993728531ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
