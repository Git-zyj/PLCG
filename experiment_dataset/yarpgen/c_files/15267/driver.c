#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 1210237010;
short var_9 = (short)3084;
int var_15 = 1173437476;
int zero = 0;
unsigned int var_18 = 2621603084U;
unsigned int var_19 = 1877515706U;
unsigned int var_20 = 1468037863U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
