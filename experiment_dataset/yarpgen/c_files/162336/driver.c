#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5579176132946813174LL;
unsigned long long int var_1 = 9285383382906212653ULL;
int var_2 = 141423111;
short var_10 = (short)14164;
int var_14 = -1156970268;
int zero = 0;
int var_15 = 1702579106;
long long int var_16 = -3624352193635099600LL;
void init() {
}

void checksum() {
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
