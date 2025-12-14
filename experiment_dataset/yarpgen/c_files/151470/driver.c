#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4729827264643261027LL;
short var_5 = (short)-1497;
unsigned long long int var_6 = 3567169052338177006ULL;
long long int var_8 = 8267589079094264662LL;
_Bool var_12 = (_Bool)1;
short var_14 = (short)20917;
int zero = 0;
short var_15 = (short)-22530;
long long int var_16 = -7959029316712182178LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
