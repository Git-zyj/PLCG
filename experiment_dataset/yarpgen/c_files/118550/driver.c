#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1338553144;
int var_7 = -1202379052;
int var_10 = -508143155;
signed char var_16 = (signed char)-101;
int zero = 0;
short var_17 = (short)24292;
long long int var_18 = 5537227258545478624LL;
void init() {
}

void checksum() {
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
