#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4876025370494734221ULL;
unsigned long long int var_7 = 7964728807151169394ULL;
int var_8 = -757240347;
int zero = 0;
signed char var_11 = (signed char)18;
unsigned int var_12 = 2664065076U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
