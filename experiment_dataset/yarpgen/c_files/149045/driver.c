#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1743831061;
long long int var_3 = -1159939627564507283LL;
long long int var_8 = -8769274945441128989LL;
unsigned char var_9 = (unsigned char)96;
long long int var_17 = -6807542415386079394LL;
int zero = 0;
unsigned char var_19 = (unsigned char)103;
long long int var_20 = -1685399224029326417LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
