#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1862906665;
_Bool var_3 = (_Bool)1;
int var_7 = -494087465;
long long int var_8 = -4190775522696482353LL;
int zero = 0;
unsigned char var_14 = (unsigned char)126;
unsigned long long int var_15 = 18362591394467780658ULL;
signed char var_16 = (signed char)37;
int var_17 = -1663799087;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
