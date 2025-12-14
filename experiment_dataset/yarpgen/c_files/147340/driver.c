#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3886368199U;
unsigned short var_6 = (unsigned short)29569;
signed char var_7 = (signed char)-109;
unsigned int var_8 = 747670841U;
int zero = 0;
short var_14 = (short)-953;
unsigned long long int var_15 = 13441287996462265492ULL;
unsigned int var_16 = 3861487371U;
void init() {
}

void checksum() {
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
