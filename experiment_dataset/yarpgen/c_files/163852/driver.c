#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-4947;
int var_5 = 948151508;
long long int var_8 = 7145454899070968933LL;
unsigned long long int var_9 = 13743163939484142331ULL;
short var_10 = (short)-10043;
int zero = 0;
long long int var_13 = 883420343941626531LL;
short var_14 = (short)15171;
void init() {
}

void checksum() {
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
