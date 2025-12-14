#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1469357199U;
unsigned int var_5 = 332281278U;
unsigned int var_7 = 3735328894U;
short var_9 = (short)-29875;
int zero = 0;
short var_11 = (short)32273;
unsigned int var_12 = 2971267659U;
unsigned int var_13 = 474332408U;
short var_14 = (short)10004;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
