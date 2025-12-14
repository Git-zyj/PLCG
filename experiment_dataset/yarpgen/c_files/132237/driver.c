#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -3246280387599516331LL;
int var_7 = 1375307504;
unsigned int var_8 = 2275074825U;
int zero = 0;
long long int var_11 = -6660166589057591757LL;
int var_12 = -476349159;
signed char var_13 = (signed char)98;
unsigned int var_14 = 3444534275U;
long long int var_15 = 1690879002087176937LL;
long long int var_16 = -6513885395521043072LL;
unsigned short var_17 = (unsigned short)840;
signed char arr_4 [23] ;
int arr_5 [23] ;
unsigned long long int arr_7 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (signed char)78;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 177862883;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 7719872534894457349ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
