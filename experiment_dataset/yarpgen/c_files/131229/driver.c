#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
unsigned long long int var_9 = 5121262416043621801ULL;
unsigned int var_12 = 2009089572U;
int var_13 = -375240250;
short var_15 = (short)14265;
short var_17 = (short)-31478;
int zero = 0;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-31740;
short var_20 = (short)-21322;
void init() {
}

void checksum() {
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
