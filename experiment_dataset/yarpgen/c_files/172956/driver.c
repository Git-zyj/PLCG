#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29799;
unsigned int var_7 = 4154779495U;
unsigned short var_16 = (unsigned short)5273;
int zero = 0;
long long int var_20 = -6389706661336503404LL;
long long int var_21 = -653903168252876352LL;
long long int var_22 = -79687249850788924LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
