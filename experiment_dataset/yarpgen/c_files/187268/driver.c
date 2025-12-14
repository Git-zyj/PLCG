#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)88;
short var_10 = (short)27751;
short var_11 = (short)25599;
unsigned short var_13 = (unsigned short)8038;
int zero = 0;
signed char var_15 = (signed char)-46;
unsigned short var_16 = (unsigned short)1786;
int var_17 = -323452386;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
