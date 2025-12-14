#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17914;
int var_2 = 2122939310;
short var_4 = (short)24496;
unsigned int var_5 = 1487522849U;
short var_6 = (short)8469;
int zero = 0;
unsigned int var_14 = 2619916041U;
int var_15 = 1000009963;
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
