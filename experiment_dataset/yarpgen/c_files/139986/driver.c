#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4505905763210361656LL;
signed char var_8 = (signed char)4;
unsigned int var_9 = 1365075973U;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 1095404570U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
