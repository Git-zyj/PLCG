#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)200;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)58715;
signed char var_6 = (signed char)61;
int var_8 = -1352221374;
int zero = 0;
unsigned long long int var_13 = 7152235387118441761ULL;
signed char var_14 = (signed char)80;
signed char var_15 = (signed char)87;
int var_16 = -975459900;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
