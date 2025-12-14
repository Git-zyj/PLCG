#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2637252730U;
signed char var_6 = (signed char)-25;
unsigned int var_7 = 4053756221U;
short var_8 = (short)-21908;
int zero = 0;
int var_10 = 1768311925;
unsigned int var_11 = 2386563162U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
