#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_12 = (short)-9463;
unsigned long long int var_17 = 1351314323985679892ULL;
int zero = 0;
long long int var_18 = 1273668423865669991LL;
long long int var_19 = -5209606294162709208LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
