#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)240;
unsigned int var_9 = 4048807494U;
unsigned char var_11 = (unsigned char)81;
signed char var_14 = (signed char)-77;
int zero = 0;
int var_16 = -1074326744;
unsigned int var_17 = 100366387U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
