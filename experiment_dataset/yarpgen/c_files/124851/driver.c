#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1204892279;
int var_10 = 954570886;
int var_11 = 1120962715;
int zero = 0;
int var_13 = -1066596653;
int var_14 = 921044487;
int var_15 = -1860255079;
int var_16 = -1661558094;
int var_17 = 2110797573;
int var_18 = 1662433284;
int var_19 = -1758664993;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
