#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1506203780;
int var_3 = -1723551838;
int var_5 = 889446611;
unsigned int var_6 = 2347976501U;
long long int var_9 = 2470093945030926941LL;
int zero = 0;
short var_10 = (short)-30301;
_Bool var_11 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
