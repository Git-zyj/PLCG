#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9374;
unsigned short var_1 = (unsigned short)40212;
signed char var_4 = (signed char)-83;
unsigned long long int var_11 = 3255405420697255189ULL;
int zero = 0;
short var_13 = (short)-6592;
short var_14 = (short)8867;
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
