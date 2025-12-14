#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8533533851269616754LL;
signed char var_1 = (signed char)-98;
signed char var_6 = (signed char)-83;
int zero = 0;
long long int var_17 = -4877062293511746224LL;
signed char var_18 = (signed char)-13;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
