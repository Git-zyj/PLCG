#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)52;
unsigned char var_12 = (unsigned char)103;
unsigned long long int var_17 = 16863862109024825092ULL;
int zero = 0;
unsigned int var_20 = 2898689835U;
short var_21 = (short)9423;
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
