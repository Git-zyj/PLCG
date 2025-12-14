#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3513258156U;
long long int var_2 = -8518391940174163329LL;
short var_4 = (short)25959;
unsigned char var_7 = (unsigned char)213;
unsigned short var_10 = (unsigned short)1677;
int zero = 0;
signed char var_11 = (signed char)-72;
unsigned int var_12 = 1258910694U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
