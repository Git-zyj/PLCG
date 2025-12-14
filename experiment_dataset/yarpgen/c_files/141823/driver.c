#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-31099;
signed char var_10 = (signed char)80;
unsigned int var_13 = 2365681407U;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 12330716541700140343ULL;
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
