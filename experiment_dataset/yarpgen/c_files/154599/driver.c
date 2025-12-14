#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1059219399U;
int var_5 = 1519556331;
int var_8 = 1841442305;
unsigned long long int var_14 = 6478216233648817152ULL;
signed char var_17 = (signed char)-17;
int zero = 0;
unsigned char var_19 = (unsigned char)102;
short var_20 = (short)13844;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
