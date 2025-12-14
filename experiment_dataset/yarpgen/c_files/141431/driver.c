#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8468882808250377826LL;
int var_7 = -1721340723;
unsigned long long int var_12 = 14709999873270806104ULL;
long long int var_14 = 2519790508706349320LL;
int zero = 0;
unsigned int var_18 = 4266109346U;
short var_19 = (short)18791;
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
