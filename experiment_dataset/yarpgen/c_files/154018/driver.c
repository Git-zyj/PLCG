#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1674463057U;
unsigned int var_3 = 153388838U;
int var_7 = 1613365123;
_Bool var_10 = (_Bool)1;
unsigned int var_12 = 1992113907U;
int zero = 0;
_Bool var_18 = (_Bool)1;
int var_19 = 1257455226;
unsigned char var_20 = (unsigned char)253;
void init() {
}

void checksum() {
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
