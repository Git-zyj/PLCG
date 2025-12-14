#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1442782719;
int var_5 = -1980876161;
int var_6 = 120116557;
int var_7 = 149001926;
int var_13 = -500813340;
int var_15 = 1171055442;
int var_16 = -845301871;
int zero = 0;
int var_17 = -1112298626;
int var_18 = -1183491073;
int var_19 = -165530653;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
