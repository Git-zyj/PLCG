#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)129;
long long int var_6 = -1184446471047545025LL;
short var_7 = (short)25287;
int var_12 = -1259101776;
unsigned int var_15 = 2307132203U;
int zero = 0;
unsigned char var_20 = (unsigned char)44;
unsigned char var_21 = (unsigned char)14;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
