#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1658729405;
int var_3 = -1034658791;
int var_4 = -1342276584;
int var_5 = 1581279713;
int var_6 = -352523780;
int var_10 = 1574552464;
int zero = 0;
int var_11 = 1731914786;
int var_12 = 2123862360;
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
