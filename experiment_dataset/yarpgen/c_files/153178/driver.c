#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -2438937013725777547LL;
unsigned long long int var_7 = 5058915877727843745ULL;
unsigned int var_9 = 3924163449U;
long long int var_12 = 8096660724091292561LL;
long long int var_16 = 5387360312146718628LL;
int zero = 0;
unsigned long long int var_17 = 14603946050926499930ULL;
unsigned int var_18 = 3833290589U;
long long int var_19 = -5290382185417574611LL;
unsigned long long int var_20 = 4333195401868421088ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
