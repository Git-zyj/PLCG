#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 637224288;
int var_4 = 1288127824;
int var_6 = 1240906627;
int var_7 = 15269924;
int var_8 = -829010235;
int var_9 = 1871630012;
int var_10 = 491448729;
int zero = 0;
int var_11 = 1040195896;
int var_12 = 644873114;
int var_13 = 1935650692;
int var_14 = -769979501;
int var_15 = -1563532106;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
