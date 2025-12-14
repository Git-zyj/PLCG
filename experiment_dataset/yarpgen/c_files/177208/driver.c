#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 876320901;
unsigned long long int var_9 = 43190516231058515ULL;
long long int var_13 = 8152902835837779804LL;
int zero = 0;
unsigned short var_14 = (unsigned short)56990;
unsigned short var_15 = (unsigned short)47682;
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
