#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2126143292U;
unsigned char var_2 = (unsigned char)35;
unsigned long long int var_6 = 17497178512882555960ULL;
int var_12 = 1370985854;
int zero = 0;
short var_14 = (short)46;
short var_15 = (short)-19736;
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
