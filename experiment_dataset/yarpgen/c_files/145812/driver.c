#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1266634331;
signed char var_6 = (signed char)58;
signed char var_17 = (signed char)119;
int zero = 0;
unsigned long long int var_20 = 17803059684137769801ULL;
unsigned long long int var_21 = 4152305641716798740ULL;
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
