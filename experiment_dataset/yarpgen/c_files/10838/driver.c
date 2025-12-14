#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-175;
int var_2 = -471953604;
int var_14 = 841844872;
int zero = 0;
unsigned int var_15 = 3798853871U;
signed char var_16 = (signed char)94;
unsigned long long int var_17 = 14097346466837393087ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
