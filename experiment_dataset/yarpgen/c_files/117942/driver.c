#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 819597580;
short var_7 = (short)26136;
unsigned int var_12 = 2513871536U;
short var_13 = (short)12555;
int zero = 0;
int var_20 = -1980531471;
signed char var_21 = (signed char)-99;
int var_22 = 398742714;
unsigned int var_23 = 2899928226U;
long long int var_24 = -5139778466911819073LL;
long long int arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 8947505396215499422LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
