#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1097410545;
unsigned int var_1 = 1706361537U;
unsigned int var_2 = 3870886443U;
long long int var_6 = -784805982403502370LL;
unsigned int var_9 = 4123396968U;
int zero = 0;
short var_10 = (short)-26771;
unsigned int var_11 = 1969186523U;
short var_12 = (short)-6381;
int var_13 = -1314838008;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
