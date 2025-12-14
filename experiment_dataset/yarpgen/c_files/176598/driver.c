#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24604;
unsigned long long int var_9 = 6900728790217747685ULL;
unsigned int var_12 = 3744839959U;
int zero = 0;
unsigned int var_15 = 1475742234U;
short var_16 = (short)15059;
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
