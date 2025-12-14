#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 773271774U;
unsigned int var_4 = 1096696112U;
int var_6 = -135449693;
int var_8 = 20603419;
int var_12 = 1050200939;
int zero = 0;
unsigned int var_13 = 3147441957U;
unsigned int var_14 = 1653695842U;
unsigned int var_15 = 3103816338U;
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
