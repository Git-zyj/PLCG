#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-19805;
short var_9 = (short)22791;
unsigned short var_14 = (unsigned short)38923;
int zero = 0;
int var_18 = -660849556;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 1237198608U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
