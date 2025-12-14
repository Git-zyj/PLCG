#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5274875136121897345LL;
long long int var_4 = 7220211738036863615LL;
unsigned char var_5 = (unsigned char)25;
unsigned int var_8 = 64822671U;
long long int var_9 = 2678256992608317520LL;
unsigned short var_10 = (unsigned short)36354;
int zero = 0;
unsigned int var_13 = 3618690434U;
long long int var_14 = 7782967872469865007LL;
void init() {
}

void checksum() {
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
