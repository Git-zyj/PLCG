#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 898081846204414141ULL;
int var_5 = -199163073;
unsigned long long int var_6 = 16889484242976975974ULL;
unsigned long long int var_8 = 16190216824056168634ULL;
unsigned long long int var_10 = 10183590671183469151ULL;
unsigned long long int var_12 = 9710603615767094489ULL;
unsigned long long int var_13 = 2921301607339621167ULL;
int var_14 = 189274526;
int zero = 0;
int var_15 = 1535262014;
unsigned long long int var_16 = 12809684629794501657ULL;
unsigned long long int var_17 = 13364839518594367992ULL;
unsigned long long int var_18 = 7100700587367439077ULL;
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
