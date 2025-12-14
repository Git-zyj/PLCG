#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1666171607U;
unsigned long long int var_5 = 16169004555625167573ULL;
int var_6 = -1279297784;
int zero = 0;
unsigned long long int var_11 = 2573769004789741627ULL;
unsigned int var_12 = 1653868916U;
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
