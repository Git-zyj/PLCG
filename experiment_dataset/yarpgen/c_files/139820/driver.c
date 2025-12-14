#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)34;
unsigned int var_9 = 3034934210U;
unsigned long long int var_12 = 4116053851714755062ULL;
int zero = 0;
short var_13 = (short)21096;
unsigned int var_14 = 1757374005U;
signed char var_15 = (signed char)78;
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
