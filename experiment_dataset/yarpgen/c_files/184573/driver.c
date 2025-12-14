#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3033001757U;
long long int var_6 = -7204444491467804041LL;
long long int var_9 = -1077963090521185693LL;
long long int var_10 = -2779714876773156911LL;
int zero = 0;
unsigned int var_12 = 1542774969U;
unsigned int var_13 = 1122692807U;
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
