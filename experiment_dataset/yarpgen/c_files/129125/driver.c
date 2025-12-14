#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 12255376097610598036ULL;
unsigned char var_7 = (unsigned char)225;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)73;
short var_12 = (short)-16265;
short var_19 = (short)9544;
int zero = 0;
unsigned char var_20 = (unsigned char)225;
unsigned int var_21 = 1619730260U;
_Bool var_22 = (_Bool)1;
short var_23 = (short)13742;
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
