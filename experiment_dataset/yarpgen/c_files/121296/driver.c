#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)2;
unsigned int var_9 = 394788446U;
unsigned int var_11 = 1258529769U;
short var_12 = (short)26533;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)21792;
short var_16 = (short)-17980;
int var_17 = 722892193;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
