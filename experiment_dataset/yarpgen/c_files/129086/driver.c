#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3036933137U;
short var_2 = (short)-31530;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)28;
int zero = 0;
int var_10 = 1426644890;
unsigned char var_11 = (unsigned char)224;
long long int var_12 = -3384622264387150491LL;
unsigned char var_13 = (unsigned char)102;
long long int arr_3 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 2672337300590676098LL;
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
