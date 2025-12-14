#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-13;
unsigned long long int var_5 = 3678087956937950732ULL;
long long int var_9 = 15377210226193306LL;
short var_14 = (short)3083;
int zero = 0;
unsigned int var_15 = 133409330U;
signed char var_16 = (signed char)-1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
