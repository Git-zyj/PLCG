#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)5974;
unsigned int var_9 = 2633745780U;
unsigned short var_17 = (unsigned short)59544;
int zero = 0;
int var_20 = -480823092;
short var_21 = (short)25083;
unsigned char var_22 = (unsigned char)226;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
