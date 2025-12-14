#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1210091773;
int var_1 = -1808840926;
int var_2 = 1373353714;
int var_3 = 2124414086;
int var_4 = 605457180;
int var_6 = 1289286327;
int var_7 = 436345732;
int var_8 = 1792505945;
int var_12 = 1315124984;
int zero = 0;
int var_13 = -279012199;
int var_14 = 1667512050;
int var_15 = 2090127430;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
