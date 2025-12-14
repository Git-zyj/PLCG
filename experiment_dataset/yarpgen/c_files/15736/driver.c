#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14384439944933453590ULL;
unsigned int var_3 = 2584267209U;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 2492086581U;
unsigned int var_6 = 3127860567U;
unsigned long long int var_8 = 6697935842203149334ULL;
signed char var_9 = (signed char)17;
signed char var_11 = (signed char)87;
unsigned int var_12 = 1534171936U;
int zero = 0;
unsigned long long int var_13 = 10126296624580332532ULL;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 3947107952U;
unsigned long long int var_16 = 2515324102824365136ULL;
unsigned long long int var_17 = 5799603132450736479ULL;
void init() {
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
