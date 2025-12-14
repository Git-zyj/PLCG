#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3364456187U;
short var_7 = (short)-19690;
unsigned int var_10 = 1956342981U;
int zero = 0;
unsigned short var_17 = (unsigned short)26427;
unsigned short var_18 = (unsigned short)9978;
void init() {
}

void checksum() {
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
