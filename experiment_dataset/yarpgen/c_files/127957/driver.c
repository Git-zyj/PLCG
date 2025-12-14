#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 783600884129862140LL;
short var_6 = (short)6406;
short var_14 = (short)-15011;
int zero = 0;
unsigned long long int var_15 = 12951293803708957461ULL;
short var_16 = (short)2588;
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
