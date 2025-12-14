#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)84;
unsigned char var_9 = (unsigned char)13;
unsigned char var_11 = (unsigned char)61;
int zero = 0;
int var_15 = 2057218641;
unsigned long long int var_16 = 10213212934389383511ULL;
unsigned int var_17 = 2651945521U;
void init() {
}

void checksum() {
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
