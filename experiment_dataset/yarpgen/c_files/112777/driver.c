#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned int var_6 = 2190238833U;
unsigned int var_8 = 1572494167U;
int var_9 = 1881821265;
int zero = 0;
short var_20 = (short)-1389;
unsigned long long int var_21 = 5390967142925126334ULL;
signed char var_22 = (signed char)-59;
short var_23 = (short)-29727;
unsigned long long int var_24 = 3227679475897225ULL;
long long int arr_1 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 5062023791039423836LL;
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
