#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3901017796317312445LL;
long long int var_6 = 8574090354723374742LL;
long long int var_13 = 3416144435935091884LL;
int zero = 0;
long long int var_17 = -7194281477860894791LL;
long long int var_18 = -3632135078899755217LL;
void init() {
}

void checksum() {
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
