#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4864076837062951516LL;
int var_3 = 2001435309;
long long int var_13 = -7328809939726137902LL;
int zero = 0;
long long int var_16 = -369646274834526887LL;
signed char var_17 = (signed char)34;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
