#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 859615756U;
long long int var_3 = -4196956829934957118LL;
short var_4 = (short)-4211;
unsigned long long int var_6 = 6318002477070234528ULL;
signed char var_8 = (signed char)-119;
unsigned int var_9 = 3542519724U;
unsigned long long int var_10 = 16007415119891946361ULL;
unsigned int var_12 = 1694065245U;
int zero = 0;
signed char var_13 = (signed char)2;
short var_14 = (short)4107;
short var_15 = (short)28955;
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
