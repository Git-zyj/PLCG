#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)203;
unsigned int var_7 = 2445239211U;
long long int var_9 = -3754167325977193408LL;
int zero = 0;
unsigned int var_14 = 2154194181U;
unsigned int var_15 = 421590217U;
int var_16 = -241637030;
long long int var_17 = 2085911805680287517LL;
long long int var_18 = 6300853528684773584LL;
_Bool arr_0 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
