#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 13399778043879955598ULL;
long long int var_6 = -7700512011240931484LL;
short var_9 = (short)-22079;
int zero = 0;
int var_14 = -646212269;
unsigned char var_15 = (unsigned char)113;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
