#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1352845111;
long long int var_6 = -5956772910449526557LL;
int zero = 0;
int var_11 = 1704452438;
unsigned short var_12 = (unsigned short)63140;
long long int var_13 = -4667370857469944674LL;
unsigned short var_14 = (unsigned short)736;
long long int var_15 = -2420892728520557446LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
