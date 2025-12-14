#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -6017501234951999595LL;
unsigned long long int var_9 = 16596291145929981180ULL;
unsigned long long int var_11 = 12940244928962736242ULL;
unsigned long long int var_12 = 7795958786314792809ULL;
unsigned short var_15 = (unsigned short)48957;
int zero = 0;
unsigned long long int var_16 = 366762947282025518ULL;
long long int var_17 = 4627337279433123815LL;
int var_18 = -1856267067;
short var_19 = (short)19650;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
