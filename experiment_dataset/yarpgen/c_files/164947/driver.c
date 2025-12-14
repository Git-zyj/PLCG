#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)9;
int var_1 = 2011667388;
unsigned int var_4 = 3930876975U;
int var_5 = 1395199640;
unsigned char var_13 = (unsigned char)229;
int zero = 0;
long long int var_20 = 2640629538001651421LL;
unsigned long long int var_21 = 5395349899428157847ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
