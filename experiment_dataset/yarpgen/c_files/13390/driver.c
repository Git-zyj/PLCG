#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)1;
signed char var_9 = (signed char)-100;
short var_12 = (short)12360;
signed char var_13 = (signed char)-9;
int zero = 0;
signed char var_16 = (signed char)-19;
signed char var_17 = (signed char)-62;
void init() {
}

void checksum() {
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
