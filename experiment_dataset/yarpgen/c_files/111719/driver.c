#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)64;
unsigned long long int var_2 = 5019862271976003511ULL;
unsigned int var_3 = 1182450578U;
unsigned int var_5 = 502207099U;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 2859695617U;
unsigned int var_9 = 1682334144U;
int zero = 0;
int var_10 = -593021126;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 3969209721U;
unsigned int var_13 = 1171838305U;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
