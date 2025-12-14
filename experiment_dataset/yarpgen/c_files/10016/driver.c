#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32886;
signed char var_7 = (signed char)-86;
short var_10 = (short)14585;
long long int var_13 = 5819278348073642738LL;
unsigned long long int var_14 = 478400358922680176ULL;
short var_15 = (short)-18608;
int zero = 0;
int var_20 = -351603800;
long long int var_21 = 1775002986013351758LL;
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
