#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)69;
signed char var_5 = (signed char)-97;
long long int var_8 = -5639993746476857408LL;
int zero = 0;
signed char var_17 = (signed char)120;
int var_18 = -1550843962;
long long int var_19 = 7811824804169272084LL;
unsigned long long int var_20 = 10946650603386100917ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
