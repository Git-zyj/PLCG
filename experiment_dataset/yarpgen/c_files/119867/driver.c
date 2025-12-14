#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 799416139;
long long int var_3 = 3982592806679594209LL;
int var_13 = -1358313928;
int zero = 0;
unsigned int var_14 = 4251801190U;
short var_15 = (short)-28079;
long long int var_16 = -9211313473616027530LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
