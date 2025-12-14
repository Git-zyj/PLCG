#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1595235606;
long long int var_4 = -9033020351182854679LL;
unsigned long long int var_8 = 9221337278876049161ULL;
signed char var_10 = (signed char)69;
signed char var_11 = (signed char)-89;
long long int var_13 = 7241544875661092507LL;
int zero = 0;
unsigned int var_15 = 4176395602U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
