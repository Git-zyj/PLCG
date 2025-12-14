#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1091961160;
int var_2 = 87654689;
unsigned short var_13 = (unsigned short)9154;
unsigned long long int var_16 = 1690236305722425176ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)29120;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
