#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15456;
unsigned int var_5 = 2080184214U;
unsigned short var_8 = (unsigned short)331;
int zero = 0;
unsigned int var_17 = 1960503487U;
signed char var_18 = (signed char)44;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
