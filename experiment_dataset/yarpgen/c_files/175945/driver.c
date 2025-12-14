#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)0;
int var_8 = 95177205;
signed char var_12 = (signed char)-37;
unsigned int var_13 = 3967873559U;
int zero = 0;
unsigned long long int var_14 = 747232769324502185ULL;
int var_15 = 1099473293;
void init() {
}

void checksum() {
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
