#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 443872219;
int var_1 = -1407405165;
int var_3 = 1663324879;
int var_5 = 331576455;
int var_6 = 1123674697;
int var_7 = 1445082488;
int var_8 = 1358432427;
int zero = 0;
int var_10 = -2135929474;
int var_11 = 2113588630;
int var_12 = -730771193;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
