#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)35;
short var_5 = (short)14519;
short var_6 = (short)17754;
unsigned long long int var_9 = 10360440851967367157ULL;
short var_10 = (short)9232;
int zero = 0;
unsigned char var_13 = (unsigned char)135;
unsigned int var_14 = 1857688985U;
short var_15 = (short)4532;
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
