#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-17278;
int var_4 = -486233950;
unsigned int var_10 = 3886501125U;
unsigned short var_11 = (unsigned short)36828;
int zero = 0;
int var_15 = -1501126564;
short var_16 = (short)25240;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
