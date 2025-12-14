#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5755924320014726310ULL;
long long int var_7 = 5528396979037607251LL;
int zero = 0;
unsigned long long int var_12 = 7817767373855642315ULL;
long long int var_13 = -8527201083642153523LL;
short var_14 = (short)-20911;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
