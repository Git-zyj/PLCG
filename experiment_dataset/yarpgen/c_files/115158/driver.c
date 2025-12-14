#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15532844244710592471ULL;
unsigned int var_1 = 14060129U;
unsigned long long int var_3 = 10562159265329393999ULL;
unsigned long long int var_4 = 2322621630976186735ULL;
short var_5 = (short)10739;
short var_6 = (short)-29069;
short var_7 = (short)21327;
unsigned long long int var_9 = 4270479027942983738ULL;
int zero = 0;
short var_10 = (short)16340;
unsigned long long int var_11 = 4797063392840746112ULL;
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
