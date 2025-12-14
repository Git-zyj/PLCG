#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)11434;
short var_5 = (short)-15047;
unsigned int var_9 = 1118004154U;
unsigned int var_11 = 1412457234U;
int zero = 0;
signed char var_12 = (signed char)-40;
short var_13 = (short)-28341;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
