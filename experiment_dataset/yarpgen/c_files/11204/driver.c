#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)25618;
unsigned int var_11 = 2567267951U;
unsigned long long int var_12 = 6910582425502306616ULL;
int zero = 0;
signed char var_14 = (signed char)-104;
unsigned short var_15 = (unsigned short)16233;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
