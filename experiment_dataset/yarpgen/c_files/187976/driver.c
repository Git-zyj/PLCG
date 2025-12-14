#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)61428;
unsigned int var_9 = 1574438205U;
long long int var_10 = 7121465395512402710LL;
unsigned char var_13 = (unsigned char)82;
unsigned long long int var_16 = 1376747384207758229ULL;
signed char var_17 = (signed char)118;
int zero = 0;
unsigned short var_20 = (unsigned short)4537;
unsigned long long int var_21 = 18306824682754519859ULL;
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
