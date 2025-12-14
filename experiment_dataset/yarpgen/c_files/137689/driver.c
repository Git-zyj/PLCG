#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-77;
unsigned int var_3 = 880887098U;
int var_5 = -717019928;
short var_7 = (short)-12733;
short var_9 = (short)28323;
unsigned char var_10 = (unsigned char)14;
int zero = 0;
int var_13 = -1728652147;
unsigned char var_14 = (unsigned char)157;
unsigned int var_15 = 2680235174U;
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
