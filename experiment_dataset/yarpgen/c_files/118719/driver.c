#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6820;
unsigned short var_5 = (unsigned short)51218;
short var_6 = (short)-30476;
short var_9 = (short)-22;
unsigned int var_10 = 92454913U;
int zero = 0;
unsigned long long int var_13 = 12016284990174466885ULL;
unsigned int var_14 = 3194795171U;
unsigned short var_15 = (unsigned short)51309;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
