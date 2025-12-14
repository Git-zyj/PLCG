#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1461529901;
int var_4 = 1178540271;
int var_5 = 608503650;
int var_6 = -685362092;
int var_9 = -984912752;
int var_12 = -768296579;
int zero = 0;
int var_15 = 100408945;
int var_16 = -36288133;
int var_17 = 220386835;
int var_18 = -1350698197;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
