#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 3291186105757100913ULL;
int zero = 0;
unsigned int var_10 = 3263900272U;
unsigned int var_11 = 3758079379U;
unsigned char var_12 = (unsigned char)168;
unsigned long long int var_13 = 13316236442210221416ULL;
unsigned long long int var_14 = 5646934515073734092ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
