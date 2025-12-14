#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 4258524414U;
unsigned int var_6 = 2358255989U;
unsigned int var_11 = 3830797U;
int var_14 = 1890078381;
int zero = 0;
int var_16 = 352448903;
unsigned long long int var_17 = 8510123342943080720ULL;
short var_18 = (short)11071;
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
