#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1212423513U;
unsigned int var_6 = 840354291U;
short var_9 = (short)20947;
unsigned int var_13 = 1435235009U;
short var_15 = (short)-9555;
int zero = 0;
unsigned long long int var_17 = 5201237264387951222ULL;
unsigned short var_18 = (unsigned short)60707;
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
