#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8710242394862350909ULL;
long long int var_13 = 5347794672199910877LL;
int zero = 0;
unsigned long long int var_15 = 12079027257722297384ULL;
unsigned short var_16 = (unsigned short)50836;
long long int var_17 = -110987108081112802LL;
unsigned int var_18 = 1260285031U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
