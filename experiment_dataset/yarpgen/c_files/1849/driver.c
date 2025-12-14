#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11369633067213734209ULL;
short var_5 = (short)29613;
short var_14 = (short)21029;
unsigned char var_15 = (unsigned char)225;
unsigned char var_18 = (unsigned char)123;
int zero = 0;
unsigned int var_19 = 1594848900U;
int var_20 = -465998441;
_Bool var_21 = (_Bool)1;
long long int var_22 = -8508097562037560127LL;
int var_23 = -1428577479;
unsigned int arr_1 [20] ;
unsigned int arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 748365604U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 3633245012U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
