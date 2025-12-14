#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3496418574308542953ULL;
signed char var_4 = (signed char)-78;
unsigned short var_10 = (unsigned short)61790;
unsigned short var_11 = (unsigned short)36020;
int zero = 0;
unsigned short var_13 = (unsigned short)28003;
unsigned long long int var_14 = 14537522817450024541ULL;
long long int var_15 = -2834645653552577462LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
