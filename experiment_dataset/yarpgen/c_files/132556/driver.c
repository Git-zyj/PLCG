#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1356796525U;
unsigned int var_4 = 862227741U;
unsigned char var_7 = (unsigned char)95;
unsigned long long int var_8 = 7894885993339829688ULL;
long long int var_9 = 5311318370389941100LL;
int zero = 0;
unsigned int var_10 = 550872660U;
unsigned char var_11 = (unsigned char)185;
unsigned long long int var_12 = 1866961277385979847ULL;
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
