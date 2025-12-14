#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 333919822U;
short var_6 = (short)-5669;
unsigned long long int var_10 = 1588664812018120158ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)9085;
int var_13 = -476831288;
unsigned long long int var_14 = 11117984983130890342ULL;
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
