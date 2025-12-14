#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)42178;
signed char var_4 = (signed char)98;
short var_12 = (short)-1151;
int zero = 0;
unsigned int var_13 = 2461297630U;
short var_14 = (short)32102;
long long int var_15 = 6129204043861858680LL;
unsigned int var_16 = 1628112436U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
