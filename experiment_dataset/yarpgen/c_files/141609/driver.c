#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-31213;
int zero = 0;
unsigned long long int var_17 = 11113361154234878085ULL;
unsigned long long int var_18 = 1550426750049591140ULL;
unsigned short var_19 = (unsigned short)13598;
int var_20 = -1626923392;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
