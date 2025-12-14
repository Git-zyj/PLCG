#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8438251640279252266ULL;
long long int var_2 = -2505337939707344673LL;
short var_3 = (short)6984;
long long int var_5 = 3769593377778439306LL;
unsigned char var_6 = (unsigned char)84;
int zero = 0;
unsigned int var_10 = 2156262519U;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)26;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 1857442912U;
unsigned long long int arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 2375050731793930743ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
