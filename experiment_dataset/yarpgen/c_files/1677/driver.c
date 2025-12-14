#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2309770495302174634ULL;
unsigned int var_6 = 78715439U;
unsigned int var_12 = 2452939693U;
int zero = 0;
short var_14 = (short)16808;
int var_15 = -1413451095;
short var_16 = (short)-16657;
short var_17 = (short)-22588;
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
