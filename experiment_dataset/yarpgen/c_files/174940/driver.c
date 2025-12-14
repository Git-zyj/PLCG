#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)40286;
unsigned char var_10 = (unsigned char)144;
long long int var_12 = -2283957727262818540LL;
int zero = 0;
unsigned short var_13 = (unsigned short)30860;
long long int var_14 = -3362984937236100202LL;
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
