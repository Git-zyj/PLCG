#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1343824882;
short var_12 = (short)-18067;
short var_13 = (short)-13903;
signed char var_15 = (signed char)3;
int zero = 0;
unsigned int var_19 = 3868505348U;
long long int var_20 = 739696282491207410LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
