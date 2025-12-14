#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8193743291286667298ULL;
unsigned int var_2 = 2406568735U;
signed char var_3 = (signed char)76;
unsigned int var_5 = 2008779770U;
signed char var_8 = (signed char)85;
int zero = 0;
long long int var_11 = 6506893111190840932LL;
signed char var_12 = (signed char)52;
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
