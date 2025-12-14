#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15963290268952664131ULL;
long long int var_3 = -1684481301869129231LL;
unsigned int var_8 = 3432362267U;
int zero = 0;
unsigned short var_14 = (unsigned short)28815;
long long int var_15 = -5375012929559319730LL;
unsigned long long int var_16 = 6146741365157875829ULL;
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
