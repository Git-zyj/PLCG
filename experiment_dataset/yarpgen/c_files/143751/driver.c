#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4714864001823791368ULL;
long long int var_1 = 3187788355562323926LL;
long long int var_4 = 4922883342536628592LL;
unsigned char var_9 = (unsigned char)2;
int zero = 0;
long long int var_18 = -2126053247303122180LL;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-30;
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
