#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3252520764754336081LL;
int var_1 = 1972653400;
unsigned char var_5 = (unsigned char)190;
unsigned long long int var_12 = 3195530449612843231ULL;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 979000799U;
unsigned int var_19 = 1093110026U;
unsigned int var_20 = 2905920143U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
