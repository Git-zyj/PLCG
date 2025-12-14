#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-67;
unsigned long long int var_6 = 426050915236841313ULL;
signed char var_8 = (signed char)-111;
int var_9 = -2053267410;
unsigned short var_11 = (unsigned short)25938;
signed char var_14 = (signed char)-41;
int zero = 0;
int var_15 = -1742581541;
unsigned short var_16 = (unsigned short)39612;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
