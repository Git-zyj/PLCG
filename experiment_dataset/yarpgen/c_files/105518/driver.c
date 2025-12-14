#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1409015759U;
long long int var_6 = -6777646888183021052LL;
unsigned short var_9 = (unsigned short)30089;
unsigned long long int var_10 = 12074225287741171450ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)53360;
unsigned long long int var_12 = 13294445652471742023ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
