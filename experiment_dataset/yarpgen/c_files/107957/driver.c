#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)13255;
unsigned char var_6 = (unsigned char)210;
unsigned char var_17 = (unsigned char)96;
int zero = 0;
long long int var_18 = -5689354305034201511LL;
long long int var_19 = 7475546943337226816LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
