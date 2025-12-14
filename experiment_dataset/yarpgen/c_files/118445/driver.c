#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1583477641U;
signed char var_3 = (signed char)104;
signed char var_9 = (signed char)89;
int zero = 0;
unsigned short var_15 = (unsigned short)36420;
unsigned long long int var_16 = 16018701393010031311ULL;
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
