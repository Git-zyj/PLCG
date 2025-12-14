#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)160;
long long int var_7 = -4377621565419062465LL;
unsigned char var_9 = (unsigned char)18;
long long int var_10 = 2309490612352202005LL;
int zero = 0;
int var_14 = 1219626603;
signed char var_15 = (signed char)59;
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
