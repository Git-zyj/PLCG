#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1985539315803634139LL;
int var_4 = -1360305845;
signed char var_10 = (signed char)32;
signed char var_12 = (signed char)26;
int zero = 0;
long long int var_19 = 3505844141991040003LL;
unsigned int var_20 = 4051899712U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
