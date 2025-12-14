#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20319;
int var_1 = -753742294;
short var_3 = (short)19758;
unsigned long long int var_9 = 16898256689816475477ULL;
unsigned char var_11 = (unsigned char)14;
int zero = 0;
int var_12 = 1102212278;
short var_13 = (short)-12205;
short var_14 = (short)9323;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
