#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)25;
unsigned long long int var_5 = 15144397921857156313ULL;
signed char var_7 = (signed char)-57;
short var_8 = (short)24629;
unsigned long long int var_11 = 16609820743269039337ULL;
int zero = 0;
signed char var_12 = (signed char)127;
signed char var_13 = (signed char)112;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
