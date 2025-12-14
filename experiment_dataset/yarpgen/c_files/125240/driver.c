#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5848;
short var_7 = (short)24672;
int var_9 = -1606155945;
int zero = 0;
long long int var_15 = -9217229451763241993LL;
unsigned char var_16 = (unsigned char)167;
short var_17 = (short)556;
unsigned char var_18 = (unsigned char)186;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
