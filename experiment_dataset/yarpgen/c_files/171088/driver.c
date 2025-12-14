#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6483769282990109465LL;
short var_2 = (short)5523;
long long int var_6 = 6505522396298721346LL;
int zero = 0;
unsigned short var_10 = (unsigned short)36703;
int var_11 = 1271572342;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
