#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6986699103621994305LL;
int var_5 = 1651327135;
long long int var_6 = -6241959752781117074LL;
int var_9 = 1653644868;
unsigned long long int var_10 = 6262354417919022415ULL;
unsigned int var_12 = 2292921985U;
int var_13 = -1011573826;
unsigned int var_16 = 771301860U;
int zero = 0;
int var_17 = 410598910;
short var_18 = (short)-25618;
unsigned int var_19 = 51355394U;
void init() {
}

void checksum() {
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
