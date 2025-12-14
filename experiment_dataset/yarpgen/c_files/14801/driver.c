#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)84;
int var_3 = 72841402;
long long int var_4 = 1624989562509258551LL;
long long int var_7 = 3188303316503423311LL;
int zero = 0;
long long int var_12 = 6042578962712330168LL;
unsigned char var_13 = (unsigned char)105;
long long int var_14 = -4734227061692863078LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
