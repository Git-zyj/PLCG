#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)56;
unsigned char var_7 = (unsigned char)211;
int var_8 = -1000536290;
unsigned long long int var_9 = 10496778651293023384ULL;
unsigned char var_12 = (unsigned char)207;
unsigned int var_13 = 283401166U;
int zero = 0;
unsigned int var_15 = 2636548983U;
signed char var_16 = (signed char)33;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
