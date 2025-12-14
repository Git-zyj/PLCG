#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_2 = (short)8299;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 2673962431U;
unsigned char var_8 = (unsigned char)227;
int zero = 0;
unsigned long long int var_10 = 17848176439777012594ULL;
unsigned int var_11 = 1618717673U;
long long int var_12 = 2861975051494013327LL;
int var_13 = 1392242991;
unsigned int var_14 = 1703647124U;
unsigned int arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 3231079175U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
