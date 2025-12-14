#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1020729528;
int var_3 = -1936277842;
int var_4 = -1033537855;
int var_5 = 1093017138;
int var_7 = 77655451;
int var_8 = -438008780;
int var_10 = -2136846050;
int var_11 = -1667591587;
int zero = 0;
int var_12 = 1052275407;
int var_13 = -276601225;
int var_14 = 523251046;
void init() {
}

void checksum() {
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
