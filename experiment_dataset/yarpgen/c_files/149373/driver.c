#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-47;
unsigned short var_8 = (unsigned short)28154;
unsigned long long int var_12 = 10420908122155079569ULL;
int zero = 0;
int var_14 = 1978032641;
unsigned int var_15 = 835852760U;
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
