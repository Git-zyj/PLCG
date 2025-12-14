#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)5712;
unsigned short var_6 = (unsigned short)48508;
unsigned long long int var_7 = 2271196165576930996ULL;
unsigned long long int var_12 = 17251044811959226433ULL;
unsigned long long int var_13 = 13702598762707759079ULL;
int zero = 0;
unsigned int var_15 = 3365822040U;
unsigned int var_16 = 403829941U;
short var_17 = (short)22840;
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
