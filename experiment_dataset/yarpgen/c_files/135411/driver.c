#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1275607589934204273ULL;
unsigned int var_2 = 1723434752U;
signed char var_5 = (signed char)59;
long long int var_10 = -8834173781420549291LL;
int zero = 0;
unsigned int var_11 = 1469440097U;
signed char var_12 = (signed char)-65;
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
