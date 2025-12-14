#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1666874288;
int var_4 = 1620115380;
int var_7 = 137707857;
int var_9 = -180507942;
int var_10 = -731823712;
int var_12 = 1165862995;
int var_15 = 725125296;
int zero = 0;
int var_19 = -227858557;
int var_20 = -2051775149;
int var_21 = -1616411543;
int var_22 = 1524331224;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
