#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1634476698401400984LL;
long long int var_7 = 5498917159799756073LL;
int var_11 = -1598361802;
int zero = 0;
signed char var_13 = (signed char)3;
short var_14 = (short)-15884;
short var_15 = (short)-28531;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
