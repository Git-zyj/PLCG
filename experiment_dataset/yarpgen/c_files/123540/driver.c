#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1010797673;
unsigned long long int var_4 = 1701793336213322950ULL;
unsigned long long int var_6 = 15708359333335267554ULL;
int var_7 = -851737862;
int var_11 = -2026036135;
int var_12 = 583611288;
unsigned char var_13 = (unsigned char)190;
int zero = 0;
unsigned char var_14 = (unsigned char)72;
int var_15 = -101840298;
int var_16 = -1018725588;
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
