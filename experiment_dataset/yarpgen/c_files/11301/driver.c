#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6636110371708067057LL;
unsigned long long int var_7 = 8620651614402688925ULL;
unsigned char var_11 = (unsigned char)24;
unsigned char var_15 = (unsigned char)184;
int zero = 0;
int var_17 = 156266308;
long long int var_18 = 5708481530665011823LL;
void init() {
}

void checksum() {
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
