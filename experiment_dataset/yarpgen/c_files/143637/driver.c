#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)2;
unsigned int var_7 = 2660603794U;
int var_13 = 1578556401;
unsigned long long int var_14 = 12614166082313806749ULL;
int zero = 0;
unsigned long long int var_16 = 3027305728979756975ULL;
long long int var_17 = -1183394028396461999LL;
signed char var_18 = (signed char)23;
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
