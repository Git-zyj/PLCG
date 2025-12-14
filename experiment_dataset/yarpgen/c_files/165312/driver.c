#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3675639552U;
unsigned long long int var_8 = 10077782128681734038ULL;
unsigned long long int var_9 = 10406689113250954228ULL;
unsigned long long int var_10 = 1179282826735139699ULL;
long long int var_12 = -3322492386857366648LL;
short var_14 = (short)-21437;
int zero = 0;
unsigned long long int var_15 = 5439026789595252624ULL;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2834383819U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
