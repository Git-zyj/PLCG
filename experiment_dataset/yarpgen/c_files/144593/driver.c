#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 395061328;
unsigned long long int var_2 = 1606690324137500142ULL;
unsigned char var_6 = (unsigned char)92;
short var_9 = (short)-14748;
int zero = 0;
short var_10 = (short)1801;
_Bool var_11 = (_Bool)1;
long long int var_12 = -5897076498300028834LL;
unsigned short var_13 = (unsigned short)4629;
_Bool arr_1 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
