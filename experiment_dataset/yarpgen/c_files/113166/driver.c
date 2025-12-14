#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7012625836243126768ULL;
long long int var_4 = -1192604595356673413LL;
unsigned short var_5 = (unsigned short)3187;
signed char var_7 = (signed char)-70;
int zero = 0;
unsigned int var_14 = 2120411823U;
signed char var_15 = (signed char)88;
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
