#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 1546956742U;
unsigned int var_9 = 1951963994U;
unsigned int var_14 = 2522099458U;
int zero = 0;
unsigned long long int var_15 = 3474804226868658204ULL;
unsigned int var_16 = 955373124U;
signed char var_17 = (signed char)52;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
