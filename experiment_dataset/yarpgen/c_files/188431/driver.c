#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45837;
unsigned long long int var_2 = 13587365605634209073ULL;
unsigned int var_10 = 2135016383U;
unsigned int var_12 = 2533673653U;
int var_13 = -1810868395;
int zero = 0;
int var_14 = 1623759325;
int var_15 = 330209720;
unsigned char var_16 = (unsigned char)152;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
