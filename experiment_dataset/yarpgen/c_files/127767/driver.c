#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 616338196;
int var_3 = -1586443491;
int var_4 = 726957294;
int var_6 = 14530053;
int var_8 = -1675137582;
int var_14 = -607713776;
int zero = 0;
int var_17 = -1845142048;
int var_18 = -260803896;
int var_19 = -865974308;
int var_20 = -283588093;
int var_21 = 2131997041;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
