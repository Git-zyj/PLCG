#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1736057568886338523ULL;
short var_4 = (short)-9648;
short var_5 = (short)-16958;
signed char var_7 = (signed char)(-127 - 1);
int zero = 0;
unsigned int var_10 = 3430333201U;
signed char var_11 = (signed char)74;
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
