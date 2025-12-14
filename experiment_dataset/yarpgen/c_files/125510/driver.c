#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2388067370U;
signed char var_2 = (signed char)-29;
unsigned int var_4 = 3893367933U;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)88;
signed char var_8 = (signed char)94;
signed char var_10 = (signed char)-36;
unsigned int var_11 = 2557503849U;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 1473508284U;
signed char var_16 = (signed char)-66;
unsigned int var_17 = 1830540198U;
signed char var_18 = (signed char)78;
void init() {
}

void checksum() {
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
