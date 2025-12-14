#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1899273502;
int var_2 = 705591710;
int var_3 = -28918287;
int var_5 = -727819646;
int var_8 = 1817047791;
int var_10 = -428139127;
int var_11 = -1574696714;
int var_12 = -1594604717;
int var_14 = -135092122;
int var_15 = 1993096891;
int zero = 0;
int var_18 = -1408306520;
int var_19 = 2043052341;
int var_20 = -1148872778;
int var_21 = 1163166833;
void init() {
}

void checksum() {
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
