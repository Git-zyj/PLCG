#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6583532883515511236LL;
unsigned int var_6 = 3954639049U;
signed char var_10 = (signed char)42;
unsigned int var_12 = 884507743U;
int zero = 0;
unsigned char var_20 = (unsigned char)60;
unsigned int var_21 = 3799242261U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
