#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 57583187U;
unsigned long long int var_9 = 2433088798427555802ULL;
unsigned int var_13 = 956084362U;
int zero = 0;
long long int var_17 = 8894664448903256966LL;
int var_18 = 483037405;
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
