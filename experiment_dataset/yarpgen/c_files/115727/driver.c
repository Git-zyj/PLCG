#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2313;
unsigned long long int var_5 = 17939006057429885375ULL;
unsigned long long int var_7 = 12662899184224604661ULL;
short var_9 = (short)496;
int zero = 0;
unsigned int var_12 = 2987368368U;
short var_13 = (short)-23487;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
