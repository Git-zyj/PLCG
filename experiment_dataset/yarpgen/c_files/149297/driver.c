#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2582698665U;
unsigned char var_14 = (unsigned char)79;
unsigned long long int var_15 = 7619871055271679535ULL;
int zero = 0;
short var_16 = (short)-18473;
unsigned int var_17 = 2466588151U;
unsigned long long int var_18 = 9493298203669309573ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
