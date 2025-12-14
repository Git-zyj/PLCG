#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5287370809657442583LL;
signed char var_5 = (signed char)29;
unsigned int var_7 = 1431526257U;
unsigned char var_8 = (unsigned char)59;
int zero = 0;
signed char var_12 = (signed char)55;
unsigned long long int var_13 = 18421688785515899601ULL;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)3;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
