#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-63;
long long int var_4 = -1922763026445566344LL;
signed char var_16 = (signed char)42;
int zero = 0;
int var_19 = -1419910935;
signed char var_20 = (signed char)85;
int var_21 = 1056015687;
int var_22 = 133175847;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
