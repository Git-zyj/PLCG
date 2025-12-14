#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-62;
unsigned int var_1 = 1468337004U;
unsigned int var_4 = 2930456853U;
unsigned int var_8 = 2605257263U;
int zero = 0;
unsigned short var_11 = (unsigned short)20738;
unsigned char var_12 = (unsigned char)1;
long long int var_13 = -4458121550513583989LL;
short var_14 = (short)-21443;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
