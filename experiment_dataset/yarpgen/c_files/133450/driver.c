#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 131324206U;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned long long int var_11 = 2122033491998301811ULL;
int zero = 0;
unsigned int var_13 = 3393861736U;
unsigned short var_14 = (unsigned short)58414;
unsigned short var_15 = (unsigned short)19995;
_Bool var_16 = (_Bool)1;
int var_17 = 382732264;
long long int arr_0 [18] ;
_Bool arr_1 [18] ;
unsigned int arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -8115042177079408022LL : 899377703781364129LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 721784684U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
