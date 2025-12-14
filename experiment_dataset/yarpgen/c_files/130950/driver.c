#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-6;
int var_2 = -638505586;
unsigned char var_9 = (unsigned char)77;
int var_12 = 964435880;
int zero = 0;
unsigned int var_13 = 384329693U;
unsigned int var_14 = 2776891417U;
short var_15 = (short)-12716;
void init() {
}

void checksum() {
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
