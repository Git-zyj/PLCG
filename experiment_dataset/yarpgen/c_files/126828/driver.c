#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13057754722654862470ULL;
short var_6 = (short)13770;
unsigned long long int var_9 = 1467125972772312407ULL;
unsigned char var_14 = (unsigned char)83;
int zero = 0;
unsigned int var_15 = 3524824702U;
unsigned int var_16 = 3098467696U;
int var_17 = -444284247;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
