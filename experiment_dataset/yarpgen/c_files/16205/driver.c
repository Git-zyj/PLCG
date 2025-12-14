#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7123745987299999226LL;
unsigned short var_7 = (unsigned short)44561;
int zero = 0;
signed char var_16 = (signed char)92;
unsigned short var_17 = (unsigned short)4912;
short var_18 = (short)29143;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
