#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40038;
unsigned int var_4 = 1839008477U;
int var_9 = 977312336;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_14 = (short)-4752;
short var_15 = (short)-15861;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
