#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2702901974193638101LL;
signed char var_8 = (signed char)106;
unsigned int var_10 = 4225399114U;
int zero = 0;
long long int var_14 = 6709097149063138586LL;
long long int var_15 = -9041471918017844869LL;
unsigned int var_16 = 1470873684U;
long long int var_17 = 1369371432152891351LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
