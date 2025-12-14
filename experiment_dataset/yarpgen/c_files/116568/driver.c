#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24896;
int var_5 = -887377585;
unsigned short var_7 = (unsigned short)14911;
signed char var_12 = (signed char)-42;
int zero = 0;
unsigned long long int var_13 = 5340313169650302145ULL;
unsigned long long int var_14 = 9278677377181537295ULL;
int var_15 = 1314101374;
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
