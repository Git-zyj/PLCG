#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 463630623;
unsigned long long int var_1 = 5910431113720607740ULL;
unsigned int var_7 = 1521690730U;
_Bool var_9 = (_Bool)1;
unsigned int var_11 = 766686660U;
signed char var_12 = (signed char)110;
int zero = 0;
unsigned int var_13 = 50262686U;
short var_14 = (short)-9954;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
