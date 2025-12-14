#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)0;
long long int var_11 = 6033734331121113408LL;
unsigned int var_16 = 208609989U;
signed char var_17 = (signed char)-106;
int zero = 0;
unsigned int var_19 = 3242631196U;
unsigned char var_20 = (unsigned char)240;
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
