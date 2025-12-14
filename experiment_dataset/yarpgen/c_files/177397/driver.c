#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 22174077;
signed char var_4 = (signed char)86;
unsigned short var_10 = (unsigned short)35320;
long long int var_11 = 4617580569097469694LL;
int zero = 0;
long long int var_13 = -7707032802705492142LL;
long long int var_14 = -8527581490694782944LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
