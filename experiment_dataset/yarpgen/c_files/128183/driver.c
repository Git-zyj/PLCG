#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 250864292U;
unsigned short var_5 = (unsigned short)58374;
signed char var_13 = (signed char)13;
int zero = 0;
int var_15 = -1795983690;
unsigned short var_16 = (unsigned short)15015;
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
