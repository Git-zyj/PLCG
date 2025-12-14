#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-62;
signed char var_14 = (signed char)113;
int zero = 0;
signed char var_16 = (signed char)-41;
unsigned long long int var_17 = 17160486397483779621ULL;
long long int var_18 = 6041270791729673156LL;
short var_19 = (short)388;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
