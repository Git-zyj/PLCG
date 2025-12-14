#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)24596;
unsigned char var_3 = (unsigned char)236;
short var_7 = (short)25983;
signed char var_11 = (signed char)24;
int zero = 0;
short var_13 = (short)5619;
signed char var_14 = (signed char)44;
void init() {
}

void checksum() {
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
