#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -606948837;
int var_6 = -1323659065;
int var_7 = -828030494;
int var_9 = 1469512453;
int zero = 0;
int var_11 = -373186866;
int var_12 = -581888085;
int var_13 = -1418556440;
int var_14 = -1241748408;
void init() {
}

void checksum() {
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
