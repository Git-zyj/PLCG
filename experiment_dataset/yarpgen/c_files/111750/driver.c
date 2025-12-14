#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_13 = (unsigned char)42;
signed char var_16 = (signed char)-38;
long long int var_17 = 7477290419250676761LL;
int zero = 0;
unsigned int var_20 = 1050771058U;
long long int var_21 = -8806526611673373595LL;
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
