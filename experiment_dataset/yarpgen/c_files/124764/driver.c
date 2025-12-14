#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1902768245U;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)193;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
int var_16 = -879524869;
int zero = 0;
short var_20 = (short)9291;
int var_21 = 1982071043;
unsigned int var_22 = 1362260887U;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
