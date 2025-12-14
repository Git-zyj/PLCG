#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3005419208611051793ULL;
unsigned int var_4 = 2454017706U;
int zero = 0;
unsigned int var_12 = 2052469943U;
unsigned short var_13 = (unsigned short)22807;
unsigned int var_14 = 1320386447U;
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
