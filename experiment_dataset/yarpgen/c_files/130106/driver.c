#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)21931;
short var_3 = (short)32275;
short var_4 = (short)-29533;
int zero = 0;
long long int var_12 = -4202318248062662221LL;
unsigned long long int var_13 = 15784627236559742350ULL;
long long int var_14 = -1333267627499530989LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
