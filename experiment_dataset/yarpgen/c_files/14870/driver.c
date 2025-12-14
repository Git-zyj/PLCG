#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1411618041;
short var_3 = (short)-8881;
short var_12 = (short)-6821;
unsigned char var_14 = (unsigned char)150;
unsigned int var_15 = 1415302043U;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1747518382U;
_Bool var_18 = (_Bool)0;
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
