#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25299;
int var_5 = -1262472668;
signed char var_11 = (signed char)-41;
int zero = 0;
signed char var_12 = (signed char)37;
unsigned char var_13 = (unsigned char)58;
int var_14 = -2128586194;
short var_15 = (short)4710;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
