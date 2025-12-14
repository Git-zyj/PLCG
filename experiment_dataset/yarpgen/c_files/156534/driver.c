#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 615333971;
int var_5 = 1006677950;
long long int var_8 = -1822550165918691436LL;
signed char var_9 = (signed char)-68;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 11051258067542352595ULL;
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
