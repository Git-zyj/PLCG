#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -464490938842511975LL;
unsigned char var_9 = (unsigned char)125;
int zero = 0;
short var_15 = (short)-7280;
long long int var_16 = -7215272805058358503LL;
long long int var_17 = 7863864715538610427LL;
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
