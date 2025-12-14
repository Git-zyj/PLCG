#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 390151343U;
unsigned int var_6 = 1661341509U;
unsigned int var_12 = 1063449218U;
unsigned int var_13 = 1312635850U;
int zero = 0;
unsigned char var_16 = (unsigned char)139;
unsigned long long int var_17 = 15495412969567058024ULL;
short var_18 = (short)5861;
short var_19 = (short)-15632;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
