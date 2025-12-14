#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25842;
unsigned short var_3 = (unsigned short)4086;
unsigned long long int var_9 = 8332967245528400516ULL;
int zero = 0;
int var_11 = 1545131872;
int var_12 = -212626426;
unsigned short var_13 = (unsigned short)16687;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
