#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)101;
unsigned short var_2 = (unsigned short)37361;
unsigned int var_4 = 1781141771U;
unsigned short var_7 = (unsigned short)14283;
signed char var_9 = (signed char)-92;
int var_12 = -784900058;
int zero = 0;
signed char var_13 = (signed char)-108;
short var_14 = (short)14292;
short var_15 = (short)-12686;
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
