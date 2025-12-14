#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2969468587U;
unsigned char var_2 = (unsigned char)42;
_Bool var_5 = (_Bool)0;
int var_9 = 1323696742;
int zero = 0;
unsigned int var_13 = 2025629605U;
short var_14 = (short)-12907;
int var_15 = -1705940915;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
