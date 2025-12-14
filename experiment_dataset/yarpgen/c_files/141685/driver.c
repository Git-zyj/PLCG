#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)96;
signed char var_8 = (signed char)-63;
unsigned short var_12 = (unsigned short)30052;
int zero = 0;
unsigned long long int var_13 = 15793796029001280461ULL;
signed char var_14 = (signed char)14;
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
