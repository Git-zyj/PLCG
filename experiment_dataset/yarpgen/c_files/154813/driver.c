#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)92;
long long int var_1 = 2879029667181148029LL;
long long int var_3 = 7478862910062721688LL;
unsigned long long int var_13 = 9982096515529620343ULL;
int zero = 0;
short var_17 = (short)-7418;
long long int var_18 = 8872381009510461467LL;
int var_19 = -832108596;
long long int var_20 = 6359429714445571665LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
