#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -113946106;
int var_5 = 584870987;
int var_10 = 1886363276;
unsigned char var_13 = (unsigned char)196;
int zero = 0;
long long int var_18 = -5363936789954546462LL;
unsigned short var_19 = (unsigned short)18033;
long long int var_20 = -3669383532516207251LL;
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
