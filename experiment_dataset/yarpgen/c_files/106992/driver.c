#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3451243983046946348LL;
long long int var_3 = 5962228707711997984LL;
int var_4 = 1255355761;
int zero = 0;
long long int var_10 = 6384055922314506444LL;
signed char var_11 = (signed char)66;
long long int var_12 = 1315423578262163898LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
