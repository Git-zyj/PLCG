#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3051254514U;
signed char var_9 = (signed char)45;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-15;
int zero = 0;
short var_14 = (short)13328;
short var_15 = (short)-19871;
void init() {
}

void checksum() {
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
