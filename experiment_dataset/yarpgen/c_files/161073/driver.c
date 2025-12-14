#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)35;
unsigned char var_10 = (unsigned char)206;
long long int var_14 = 2119440732243035772LL;
unsigned int var_15 = 2040200012U;
int zero = 0;
long long int var_18 = 864935112802372957LL;
long long int var_19 = 1306635036068755672LL;
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
