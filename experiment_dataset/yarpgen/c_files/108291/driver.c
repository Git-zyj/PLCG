#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_3 = (signed char)-41;
int var_9 = 1105304172;
short var_10 = (short)-17140;
int var_13 = 900388045;
int zero = 0;
signed char var_14 = (signed char)-114;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 3305354965U;
unsigned int var_17 = 493771202U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
