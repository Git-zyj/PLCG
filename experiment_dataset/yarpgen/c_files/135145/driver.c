#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
long long int var_11 = -1975290688982066754LL;
int var_12 = 1293798934;
int var_13 = -1809403926;
_Bool var_14 = (_Bool)0;
int var_15 = 2010800982;
unsigned int arr_2 [19] ;
int arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 3803325406U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 1756855902;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
