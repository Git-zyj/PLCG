#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5302097324144969183LL;
unsigned int var_4 = 290839673U;
unsigned long long int var_6 = 4306009887448710569ULL;
_Bool var_7 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)57;
unsigned long long int var_12 = 6982291388773994817ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
